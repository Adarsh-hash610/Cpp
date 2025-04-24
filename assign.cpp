#include<iostream>
using namespace std;

int main()
{
    int teaBags;
    cout <<"Enter the number of teaBags: ";
    cin>> teaBags;
    if(teaBags<10)
    {
        teaBags=teaBags+5;
    }
    cout << "Your total teabags are: "<<teaBags;
    return 0;
}