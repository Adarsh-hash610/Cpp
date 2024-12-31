#include<iostream>
using namespace std;

void sum(int arr[],int size)
{
    int i,j,count=0;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if((arr[i]+arr[j])%60==0)
            {
                count++;
            }
        }
    }
    cout <<count;





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
    sum(arr,n);
}