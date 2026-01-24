#include<iostream>
using namespace std;

int sumfunc(int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return arr[0];
    }
    int remainingPart=sumfunc(arr+1,n-1);
    int sum=arr[0]+remainingPart;
    return sum;
}
int main(){
    int n=5;
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int ans=sumfunc(arr,n);
    cout <<"Sum of the array is: "<<ans;
}