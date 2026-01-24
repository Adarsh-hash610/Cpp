#include<iostream>
using namespace std;

void print(int* arr,int start,int end)
{
    for(int i=start;i<=end;i++)
    {
        cout << arr[i]<<" ";
    }cout << endl;
}
bool binarySearch(int start,int end,int arr[],int size,int key)
{
    print(arr,start,end);
    if(start>end){
        return false;
    }
    int mid=(start+end)/2;
    cout << "Value of mid is: "<<arr[mid]<<endl;
    if(arr[mid]==key){
        return true;
    }
    else if(arr[mid]>key){
        return binarySearch(start,mid-1,arr,size,key);
    }
    else{
        return binarySearch(mid+1,end,arr,size,key);
    }
    return false;
}
int main()
{
    int n=6;
    int arr[6]={2,3,5,6,8,9};
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    int start=0;
    int end=n-1;
    int ans=binarySearch(start,end,arr,n,key);
    if(ans){
        cout << "Key found";
    }
    else{
        cout << "Key not found";
    }
}