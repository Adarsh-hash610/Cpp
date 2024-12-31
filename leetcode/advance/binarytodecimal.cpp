#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,p=0,i=0;
    cout << "Enter the n: ";
    cin >> n;

    while(n!=0)
    {
        int digit= n % 10;
        if(digit == 1)
        {
            p=p + pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout << p << endl;
}