#include<iostream>
using namespace std;
// void reverse(int arr[],int size)
// {
//     int start=0;
//     int end=size-1;
//     while(start<=end)
//     {
//         swap(arr[start],arr[end]);
//         start=start+2;
//         end=end-2;
//     }
// }

// void print(int arr[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         cout << arr[i] << " ";
//     }
// }


void swapAlternate(int arr[],int size)
{
    int i=0;
   for(i=0;i<size;i+=2){

   
    if(i+1<size)
    {
        swap(arr[i],arr[i+1]);
        
    }
   } 
}

void print(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n,arr[100];
    cout << "Enter the n: ";
    cin >> n;
    cout << "Enter the array: ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    swapAlternate(arr,n);
    print(arr,n);

}