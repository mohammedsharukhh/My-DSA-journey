#include <iostream>
using namespace std;
int main() {
    int row = 1;
    int n;
    cin >> n;
    while (row <= n)
    {
        int col = 1;
        while (col <= row )
        {
             cout << row + col - 1;
             col = col + 1;
        }
        cout << endl;
        row = row +1;     
    }
}
