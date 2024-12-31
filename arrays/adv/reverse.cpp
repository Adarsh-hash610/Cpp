#include<iostream>
using namespace std;

// void reverse(int arr[],int size)
// {
//     int i;
//     for(i=size-1;i>=0;i--)
//     {
//         cout << arr[i]<<" ";
//     }
// }
void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }
}

int main(){
    int n;
    cout << "Enter the n: ";
    cin >>n;
    int arr[100];
    cout << "Enter the array: ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    reverse(arr,n);
    printarray(arr,n);
}