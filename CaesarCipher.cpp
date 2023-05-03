#include<iostream>
using namespace std;

int main() {
        string text = "";
        cout << "Enter text: ";
        cin >> text;
        int key = 0;
        cout << "Enter key: ";
        cin >> key;

        string cipher = "";
        for(int i = 0; i < text.length(); i++) {
                cipher += (((text[i]-'a') + key)%26) + 'a';
        }
        cout << "Cipher for " << text << " is " << cipher << endl;

        cout << "------------------------------------------------" << endl;
        string encodedText = "";
        cout << "Enter cipher: ";
        cin >> encodedText;
        string decodedText = "";
        key %= 26;
        for(int i = 0; i < encodedText.length(); i++) {
                decodedText += ((((encodedText[i]-'a') - key)+26)%26) + 'a';
        }
        cout << "Decoded Text: " << decodedText << endl;
        return 0;
}
