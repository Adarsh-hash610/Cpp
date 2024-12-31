// counts the number of subsequence whose sum is equal to the target value....

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
 
int f(int i,int n,int arr[],int s,int sum)
{
    if(i==n)
    {
        if(s==sum)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    s=s+arr[i];
    int l=f(i+1,n,arr,s,sum);
    s=s-arr[i];
    int r=f(i+1,n,arr,s,sum);
    return l+r;
}
int main()
{
    int arr[]={1,2,1};
    int i=0;
    int n=3;
    int sum=2;
    int s=0;
    cout << f(i,n,arr,s,sum);
    
}