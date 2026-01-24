#include<iostream>
using namespace std;

void bubbleSort(int *arr, int size)
{
    // base Case-->already sorted
    if(size==0 || size==1)
    {
        return;
    }

    // largest element ko last mein rakhna haii...
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,size-1);
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    cout <<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] <<" ";
    }
}