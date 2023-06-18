import java.net.*;
import java.io.*;

public class Client {
    public static void main(String[] args) throws Exception {
        Socket s = new Socket("localhost", 8888);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        DataOutputStream dout = new DataOutputStream(s.getOutputStream());
        BufferedReader in = new BufferedReader(new InputStreamReader(s.getInputStream()));
        String fname = br.readLine();

        String str;
        dout.writeBytes(fname + "\n");
        str = in.readLine();

        if(str.equals("Yes")) {
            while((str = in.readLine()) != null) {
                System.out.println(str);
            }
            br.close();
            dout.close();
            in.close();
            s.close();
        } else {
            System.out.println("File not found");
        }
    }
}