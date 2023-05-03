#include<iostream>
using namespace std;

int main() {
        int n;
        cin >> n;
        int setBit = 0;
        while(n != 0) {
                if(n & 1) {
                        setBit++;
                }
                n = n >> 1;
        }
        cout << "Set bit count: " << setBit << endl;
        cout << "Parity: " << (setBit & 1) << endl;
        return 0;
}
