#include<iostream>
using namespace std;
bool f(int i,int n,char name[])
{

    if(i>n/2)
    {
        return true;
    }
    else if(name[i]!=name[n-i-1])
    {
        return false;
    }
    return f(i+1,n,name);
}
int main()
{
    char name[5];
    cin >> name;
    cout << f(0,5,name);
}