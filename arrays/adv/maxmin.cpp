#include<iostream>
#include<climits>
using namespace std;

int getmax(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;

}

int getmin(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;

}

int main()
{
    int n,arr[100];
    cout << "Enter the number of elements: ";
    cin>>n;

    cout << "Enter the array: ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int maximum=getmax(arr,n);
    int minimum=getmin(arr,n);

    cout << "Maximum is: " <<maximum << endl;
    cout << "minimum is: " << minimum << endl;
    
}
