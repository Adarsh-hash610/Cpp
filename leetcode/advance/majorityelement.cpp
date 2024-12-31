#include<iostream>
using namespace std;

int majorityelement(int arr[],int size)
{
    int i,count=1,max;
    for(i=0;i<size;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
        else{
            count=1;
        }
    }
    return count;
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
    int index=majorityelement(arr,n);
    cout << "majority is: "<< index;

}