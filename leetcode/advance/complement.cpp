#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the n: ";
    cin >>n;
    int mask=0;
    int m=n;
    if(n==0){
        cout << 1;
    }

    while(m!=0)
    {
        mask=(mask << 1)|1;
        m=m>>1;
    }
    int ans=(~n)& mask;

    cout << ans;

}