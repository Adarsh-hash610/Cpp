#include<iostream>
using namespace std;

int main()
{
    int n,m;
    char op;
    cout << "Enter the n: ";
    cin >> n;
    cout << "Enter the m: ";
    cin >> m;


    cout << "Enter the character: ";
    cin >> op;
    switch(op)
    {
        case '+': cout << n+m <<endl;
            break;
        case '-' : cout << n-m;
            break;
        case '*': cout << n*m;
            break;
        case '%': cout << n%m;
            break;
        default: cout << "default character";
    } 
}