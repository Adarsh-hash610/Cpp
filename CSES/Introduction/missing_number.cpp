#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long x;
    long long sum=0;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        sum=sum+x;
    }
    long long total_sum=n*(n+1)/2;
    cout << total_sum-sum<<endl;
    return 0;
    
    
}