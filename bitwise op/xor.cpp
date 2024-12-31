#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter  the 2nd number:  ";
    cin >> m;
    int bit=n^m;
    cout << bit;
}