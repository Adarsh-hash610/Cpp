#include<iostream>
using namespace std;

void sort(int arr[],int size)
{
    int temp;
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }

}

int main()
{
    int n,i,arr[100];
    cout << "Enter the n: ";
    cin >> n;

    cout << "Enter the array: ";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    sort(arr,n);
}