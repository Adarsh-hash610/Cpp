#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        if(key>mid){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main(){
    int n,arr[100],i,key;
    cout << "Enter the n: ";
    cin >>n;
    cout << "Enter the array: ";
    for(i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    cout << "Enter the key: ";
    cin >>key;
    int index=binarySearch(arr,n,key);
    cout << "index of" << key << "is" << index;

    return 0;
}