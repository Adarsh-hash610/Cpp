#include<iostream>
using namespace std;

int firstoccur(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}

    int lastoccur(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}
int main()
{
    int n,arr[100],i,key;
    cout << "Enter the n: ";
    cin >> n;
    cout << "enter the array: ";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key: ";
    cin >>key;
    cout << "First occurence of "<< key << " is at index: "<< firstoccur(arr,n,key)<<endl;
    cout << "last occurence of "<< key << " is at index: "<< lastoccur(arr,n,key)<<endl;
   
    
}