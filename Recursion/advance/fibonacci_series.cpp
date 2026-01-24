#include<iostream>
using namespace std;

int f(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    int first=f(n-1);
    int second=f(n-2);
    return first+second;
}
int main()
{
    int n;
    cin >>n;
    cout << f(n);
}