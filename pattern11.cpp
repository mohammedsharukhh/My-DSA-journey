#include<iostream>
using namespace std;
int main() {
    int i= 1;
    int n;
    cout << " Enter the value of n: ";
    cin >> n;
    int count = 0;
    while(i <= n) {
        int j = 1;
        while ( j <= n)
        {
            char ch = 'A' + count ;
            cout << ch << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}