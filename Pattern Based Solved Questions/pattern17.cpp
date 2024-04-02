#include<iostream>
using namespace std;
int main() {
    int row = 1;
    int n;
    cout << "< Enter the value: ";
    cin >> n;
    while ( row <= n)
    {
        int space = n - row;
        //space print karlo
        while (space)
        {
            cout << " ";
            space = space -1 ;
        }
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }
        cout <<endl;
        row = row + 1;
    }
    
}