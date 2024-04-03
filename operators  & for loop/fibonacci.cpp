#include<iostream>
using namespace std;
int main() {
    int n;
    cout <<"Enter the value of N: ";
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a <<" "<<b <<" ";
    for (int i = 0; i <=n ; i++)
    {
        int number = a+b;
        cout << number << " ";
        a = b;
        b = number;
        //41;15

    }
    
}