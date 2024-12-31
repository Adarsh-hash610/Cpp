#include<iostream>
using namespace std;


void sortOne(int arr[],int size)
{
    int i=0;
    int j=size-1;
    while(i<j)
    {
        while(arr[i]==0 && i<j)
        {
            i++;
        }
        while(arr[j]==1 && i<j)
        {
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

}
void printarray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout << arr[i]<< " ";
    }
    cout << endl;
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
    sortOne(arr,n);
    printarray(arr,n);
}