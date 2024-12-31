#include<iostream>
using namespace std;

int findunique(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    return ans;

}

int main()
{
    int n,arr[100];
    cout << "Enter the n: ";
    cin>>n;

    cout << "Enter the array: ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int result=findunique(arr,n);
    cout << result<<" ";
}