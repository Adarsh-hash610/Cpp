#include<iostream>
using namespace std;

int main()
{
    int n,sum=0,product=1;
    cout << "Enter the num: ";
    cin>>n;
    
    while(n>0)
    {
        int digit=n%10;
        n=n/10;
        product=digit*product;
        sum=sum+digit;
    }
    cout<< "sum of the digit is: " << sum << endl;
    cout << "product of the digit is: " << product <<endl;
}