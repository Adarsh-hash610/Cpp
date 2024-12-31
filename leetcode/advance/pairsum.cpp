#include<iostream>
using namespace std;

void pairSum(int arr[],int size,int sum)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
               cout << arr[i]<<" "<< arr[j] << endl;
               
                
            }
        }
    }
    
}
int main()
{
    int n,arr[100],i,sum;
    cout << "Enter the num: ";
    cin >> n;

    cout << "Enter the array: ";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the sum: ";
    cin >> sum;

    pairSum(arr,n,sum);
}