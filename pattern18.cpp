#include<iostream>
using namespace std;
int main() {
    int row = 1;
    int n;
    cin >> n;
    int value =0;
    while ( row <= n)
    {
        
        int col = 1;
        value = n - row + 1;
       
        while (col <= n - row + 1 )
        {
            cout << "*";
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        
        row = row + 1;
    }
    
}