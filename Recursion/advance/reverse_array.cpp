#include<iostream>

using namespace std;

// void f(int s,int e,int arr[])
// {
//     if(s>e)
//     {
//         return;
//     }
//     swap(arr[s],arr[e]);
//     f(s+1,e-1,arr);
// }
void f(int s,int n,int arr[])
{
    if(s>n/2)
    {
        return ;
    }
    swap(arr[s],arr[n-s-1]);
    f(s+1,n,arr);
}
int main()
{
   
    int arr[5];
    cout << "Enter the array elements: ";
    for(int i=0;i<5;i++)
    {
        cin >>arr[i];

    }
    int s=0;
    int e=4;
    // f(s,e,arr);
    f(s,5,arr);
    cout << "Reverse of an array is: ";
    for(int i=0;i<5;i++)
    {
        cout << arr[i]<< " ";
    }

}