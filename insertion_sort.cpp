#include<iostream>
using namespace std;

void insertion_sort(int *arr,int n)
{
    if(n<=1)
    {
        return;
    }
      
}

int main()
{
    int n=7;
    int arr[7]={6,3,8,1,4,9,2};
    insertion_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }
}