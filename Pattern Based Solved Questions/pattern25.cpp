#include<iostream>
using namespace std;
int main() {
    int row = 1;
    int n = 5;
    while (row <= n)
    {
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << col;
            col = col + 1;
        }
      
        int start = 1;
        while (start < row )
        {
           cout << "*";
           start = start + 1;
        }    
        int space = row - 1;
        while (space)
        {
            cout << "*";
            space = space - 1;
        }
        int cole = n - row + 1;
        while (cole >= 1)
        {
           cout << cole;
           cole = cole - 1;
        }
        cout << endl;
        row = row + 1;
    }
    
}