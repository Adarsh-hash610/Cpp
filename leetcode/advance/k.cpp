#include<iostream>
using namespace std;

bool twice(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n;
    int arr[100], i;
    cout << "Enter the num: ";
    cin >> n;
    cout<< "Enter the array: ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int index=twice(arr,n);
    cout << index;
    
    return 0;
}