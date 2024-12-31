#include<iostream>
#include<utility>
using namespace std;

void sort(int arr[],int size)
{
    int i,j;
    int min;

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
    int n,arr[100],i;
    cout << "Enter the n: ";
    cin >> n;
    cout << "Enter the array: ";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,n);
    
}