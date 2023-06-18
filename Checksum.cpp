#include <iostream>
using namespace std;

int sender(int arr[10], int n)
{
    int checksum, sum = 0, i;
    cout << "\n****SENDER SIDE****\n";
    for (i = 0; i < n; i++)
        sum += arr[i];
    cout << "SUM IS: " << sum << endl;
    checksum = ~sum; // 1's complement of sum
    cout << "\nCHECKSUM IS: " << checksum << endl;
    return checksum;
}
void receiver(int arr[10], int n, int sch)
{
    int checksum, sum = 0, i;
    cout << "\n\n****RECEIVER SIDE****\n";
    for (i = 0; i < n; i++)
        sum += arr[i];
    cout << "SUM IS: " << sum << endl;
    sum = sum + sch;
    checksum = ~sum; // 1's complement of sum
    cout << "\nCHECKSUM IS: " << checksum << endl;
}

int main()
{
    int n, sch, rch;
    int arr[10];
    cout << "\nENTER SIZE OF THE STRING: ";
    cin >> n;
    cout << "ENTER THE ELEMENTS OF THE ARRAY TO CALCULATE CHECKSUM:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sch = sender(arr, n);
    receiver(arr, n, sch);
}