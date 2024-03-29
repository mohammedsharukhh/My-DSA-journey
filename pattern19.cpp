#include<iostream>
using namespace std;
int main() {
    int row = 1;
    int n;
    cin >> n;
    while ( row <= n)
    {
        int count = n - row + 1;
        int space = row -1;
        while (space)
        {
            cout << space;
            space = space - 1;
        }
        while (col < = n - row + 1 )
        {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;

}