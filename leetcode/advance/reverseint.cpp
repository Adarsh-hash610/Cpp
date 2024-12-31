#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the n: ";
    cin >> n;
    int ans=0;
    int num=n;
    while(n!=0)
    {
        int rem=n%10;
        ans=ans*10+rem;
        n=n/10;
    }
    cout << ans;
}