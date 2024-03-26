#include<iostream>
#include<string>
using namespace std;
int main(){
int i;
string str;
cout << "Enter the name: ";
cin >> str;
for ( i = str.length() -1 ; i >= 0; i--)
{
    cout << str[i];
}
}
