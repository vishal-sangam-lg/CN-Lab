#include <iostream>
#include <string>

using namespace std;

string encrypt(string msg, int key)
{
    char curr;
    for (int i = 0; i < msg.length(); i++)
    {
        curr = msg[i];
        if (islower(curr))
        {
            curr = (curr - 'a' + key) % 26 + 'a';
        }
        else if (isupper(curr))
        {
            curr = (curr - 'A' + key) % 26 + 'A';
        }
        else if (isdigit(curr))
        {
            curr = (curr - '0' + key) % 10 + '0';
        }
        else
        {
            cout << "Invalid Message" << endl;
        }
        msg[i] = curr;
    }
    cout << "The Encrypted message is: " << msg << endl;
    return msg;
}

void decrypt(string msg, int key)
{
    char curr;
    for (int i = 0; i < msg.length(); i++)
    {
        curr = msg[i];
        if (islower(curr))
        {
            curr = (curr - 'a' - key) % 26 + 'a';
        }
        else if (isupper(curr))
        {
            curr = (curr - 'A' - key) % 26 + 'A';
        }
        else if (isdigit(curr))
        {
            curr = (curr - '0' - key) % 10 + '0';
        }
        else
        {
            cout << "Invalid Message" << endl;
        }
        msg[i] = curr;
    }
    cout << "The Decrypted message is: " << msg;
}

int main()
{
    string msg, en_msg;
    int key;
    cout << "Enter the message to be encrypted: ";
    cin >> msg;
    cout << "Enter the key: ";
    cin >> key;
    en_msg = encrypt(msg, key);
    decrypt(en_msg, key);
    return 0;
}