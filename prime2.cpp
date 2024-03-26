#include<iostream>
using namespace std;
int main() {
    int i;
    int n;
    cout << "Enter the number to check: ";
    cin >> n;
    for(i = 2; i <= n/2; i ++)
    {
        if (n % i == 0){
            cout << n << " is Not prime";
        }
        else {
            cout << n <<"is Prime";
        }
    }
}