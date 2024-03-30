#include<iostream>
using namespace std;
int main() {
    int row = 1;
    int n;
    cout << " Enter the value of N: ";
    cin >> n;
    while (row <=n)
    {
        int space = n - row + 1;
        while (space)
        {
           cout << " ";
           space = space - 1;
        }
        int col = 1 ;
        while (col <= row )
        {
           
            cout << "*" ;
            col = col + 1;
           
        }
        int start = row - 1;
        while (start) {
            cout << "*";
            start = start - 1;
        }
        cout << endl;
        row = row + 1;
    }
}