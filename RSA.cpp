#include<bits/stdc++.h>
using namespace std;

int getPublicKey(int phi) {
    int res = 2;
    for(int i = 2; i < phi; i++) {
        if(__gcd(i, phi) == 1) {
            res = i;
            break;
        }
    }
    return res;
}

int getPrivateKey(int publicKey, int n) {
    int i = 1, res = 1;
    while(true) {
        int temp = i * publicKey;
        if(temp % n == 1) {
            res = i;
            break;
        }
        i++;
    }
    return res;
}

string encrypt(string msg, int publicKey, int n) {
    for(int i = 0; i < msg.size(); i++) {
        int asciiValue = msg[i] - 'a';
        int k = 1;
        for(int j = 0; j < publicKey; j++) {
            k = k * asciiValue;
            k = k % n;
        }
        msg[i] = k + 'a';
    }
    return msg;
}

string decrypt(string msg, int privateKey, int n) {
    for(int i = 0; i < msg.size(); i++) {
        int asciiValue = msg[i] - 'a';
        int k = 1;
        for(int j = 0; j < privateKey; j++) {
            k = k * asciiValue;
            k = k % n;
        }
        msg[i] = k + 'a';
    }
    return msg;
}

int main() {
    string msg = "hello";
    int p = 3;
    int q = 7;
    int n = p * q;
    int phi = (p-1) * (q-1);

    int publicKey = getPublicKey(phi);
    int privateKey = getPrivateKey(publicKey, n);

    string encryptedMsg = encrypt(msg, publicKey, n);
    string decryptedMsg = decrypt(encryptedMsg, privateKey, n);
    cout << "Encrypted message: " << encryptedMsg << endl;
    cout << "Decrypted message: " << decryptedMsg << endl;
}