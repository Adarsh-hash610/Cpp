#include<iostream> 
using namespace std;

void sumofelements(int arr[],int size)
{
    int i;
    int sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    cout << "sum of elements: " << sum;

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

    sumofelements(arr,n);
    
}