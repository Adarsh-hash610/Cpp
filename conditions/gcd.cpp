#include<iostream>
#include<algorithm>

using namespace std;

void gcd(int n1,int n2)
{
    for(int i=min(n1,n2);i>=1;i--)
    {
        if(n1%i==0 && n2%i==0)
        {
            cout<< i;
            break;
        }

    }
}

int main()
{
    int n1,n2;
    cout <<"Enter the first number: ";
    cin>>n1;
    cout <<"Enter the second number: ";
    cin >> n2;
    gcd(n1,n2);
}
