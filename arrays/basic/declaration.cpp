#include<iostream>
using namespace std;

int main()
{
    int n,arr[100];
    cout << "Enter the n: ";
    cin >>n;
    int i;
    cout << "Enter the array elements: ";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "First elements of the array is: " << arr[0];
}