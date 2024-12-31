#include<iostream>
using namespace std;

int main()
{
    int n,i=0,sum=0;

    cout << "Enter the number : ";
    cin >> n;
    while (i<=n)
    {
        sum=sum+i;
        i=i+2;
        /* code */
    }

    cout << "sum of all the even number is: "<< sum <<endl;
    
}