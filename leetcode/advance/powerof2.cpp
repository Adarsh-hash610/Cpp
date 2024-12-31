#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<< "Enter the n: ";
    cin >>n;
    // int i=0;
    // int ans=0;
    // while(ans<=n)
    // {
    //     ans=pow(2,i);
    //     if(ans==n)
    //     {
    //         cout << i;
    //     }
        
    //     i++;
    // }
    int count=0;
    while(n>0)
    {
        if(n&1)
        {
            count++;
        }
        n=n>>1;
    }
    if(count==1)
    {
        cout << true << endl;
    }
    else{
        cout << false;
    }
}  