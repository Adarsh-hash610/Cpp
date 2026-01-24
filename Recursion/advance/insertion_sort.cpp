#include<iostream>
using namespace std;

void insertionSort(int *arr,int size,int i)
{
    if(size==0 || size==1)
    {
        return;
    }
    
    while(i>0)
    {
        if(arr[i]<arr[i-1])
          {
            swap(arr[i],arr[i-1]);
        }
        i--;
    }
    insertionSort(arr,size-1,i+1);
}
int main()
{
    int n;
    cin>>n;
    int arr[10];
    int i=1;
    cout << "Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr,n,i);
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }
}