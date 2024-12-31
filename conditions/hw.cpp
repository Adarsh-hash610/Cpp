#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the character: " ;
    cin >> ch;

    if(ch>=97 && ch<=122)
    cout << "Character is lower case" << endl;

    else if(ch>=65 && ch<=90)
    cout << "character is upper case " << endl;

    else if(ch>=48 && ch<=57)
    cout << "character is numeric" << endl;

    else
    cout << "default character " ;
}