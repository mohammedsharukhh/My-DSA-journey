#include<iostream>
using namespace std;
int main() {
    int i = 1;
    int n;
    cin>> n;
    while ( i <= n)
    {
        int space = i - 1;
         while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int col = 1;
        while ( col <= n - i + 1 )
        {
            cout << i; 
            col = col +1;
        }
        cout << endl;
        i = i+ 1;         
    }
    
}/// 54.20