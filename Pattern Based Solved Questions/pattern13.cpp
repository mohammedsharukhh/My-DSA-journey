#include <iostream>
using namespace std;
int main() {
    int row= 1;
    int n;
    cin >> n;
  
    while (row <= n)
    {
        int col= 1;   
        while (col <= n)
        {
            char ch = ( row + col - 1 + 'A' - 1);
             cout << ch;
            ch = ch + 1;
            col = col + 1;

        }
        cout << endl;
        row = row + 1;
    }
    
}