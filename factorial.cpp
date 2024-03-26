#include<iostream>
using namespace std;
int main() {
    int i;
    int n ;
    cout << "Enter the Number: ";
    cin >> n;
    int factorial = 1;
    if ( n <= 0 )
    {
        cout << "Error!";
        }
        else {
        for (i = 1; i <= n; i++){
            factorial = factorial * i;
        }
        cout << factorial;
        }
}