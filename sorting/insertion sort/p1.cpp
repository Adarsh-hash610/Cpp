#include<iostream>
using namespace std;

void insertionsort(int size,int arr[])
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int main()
{
    int n,arr[100],i;
    cout << "Enter the n: ";
    cin >> n;

    cout << "Enter the array :";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    insertionsort(n,arr);
}