#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter first num: ";
    cin>>a;
    cout << "Enter second num: ";
    cin >> b;

    int bit=a&b;
    cout << bit;
}