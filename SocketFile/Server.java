import java.net.*;
import java.io.*;

public class Server {
    public static void main(String[] args) throws Exception {
        ServerSocket ss = new ServerSocket(8888);
        Socket s = ss.accept();
        BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));
        DataOutputStream dout = new DataOutputStream(s.getOutputStream());
        String fname = br.readLine();
        System.out.println("Requesting for " + fname);
        FileReader fr = null;
        BufferedReader fileBr = null;
        boolean flag;

        File f = new File(fname);
        if(f.exists()) flag = true;
        else flag = false;

        if(flag == true) {
            dout.writeBytes("Yes" + "\n");
        } else {
            dout.writeBytes("No" + "\n");
        }
        if(flag == true) {
            fr = new FileReader(fname);
            fileBr = new BufferedReader(fr);
            String str;
            while((str = fileBr.readLine()) != null) {
                dout.writeBytes(str + "\n");
            }
            fileBr.close();
            dout.close();
            br.close();
            fr.close();
            s.close();
            ss.close();
        }
    }
}
