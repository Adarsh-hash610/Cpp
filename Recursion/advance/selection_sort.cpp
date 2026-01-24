#include<iostream>
using namespace std;

void selectionSort(int *arr,int size)
{
    if(size==0 || size==1)
    {
        return;
    }
    int mini=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<arr[mini]){
            mini=i;
    }
    }
    swap(arr[0],arr[mini]);
    selectionSort(arr+1,size-1);
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    cout <<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout <<arr[i]<<" ";
    }
}