// // Sender's side

// #include<iostream>
// using namespace std;

// int main() {
//     string msg;
//     int count = 0, key;
//     cout << "Enter message to be sent: ";
//     cin >> msg;
//     for(int i = 0; i < msg.length(); i++) {
//         if(msg[i] == '1') {
//             count++;
//         }
//     }
//     cout << "Enter 1 for odd parity and 2 for even parity" << endl;
//     cin >> key;
//     if(key == 1) {
//         if(count % 2 != 0) {
//             msg += "0";
//         } else {
//             msg += "1";
//         }
//     } else if(key == 2) {
//         if(count % 2 == 0) {
//             msg += "0";
//         } else {
//             msg += "1";
//         }
//     }
//     cout << msg << endl;
//     return 0;
// }

// // Receiver's side

// #include<iostream>
// using namespace std;

// int main() {
//     string msg;
//     int count = 0, key;
//     cout << "Enter message received: ";
//     cin >> msg;
//     for(int i = 0; i < msg.length(); i++) {
//         if(msg[i] == '1') {
//             count++;
//         }
//     }
//     cout << "Enter 1 for odd parity and 2 for even parity" << endl;
//     cin >> key;
//     if(key == 1) {
//         if(count % 2 != 0) {
//             cout << "Correct\n";
//         } else {
//             cout << "Incorrect\n";
//         }
//     } else if(key == 2) {
//         if(count % 2 == 0) {
//             cout << "Correct\n";
//         } else {
//             cout << "Incorrect\n";
//         }
//     }
//     return 0;
// }