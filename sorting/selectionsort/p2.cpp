#include<iostream>
using namespace std;

void swap(int arr[],int size)
{
    int i,j,min;
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
    for(i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    int arr[100],i,min;
    cout << "Enter the n: ";
    cin >> n;

    cout << "Enter the array: ";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    swap(arr,n);
}