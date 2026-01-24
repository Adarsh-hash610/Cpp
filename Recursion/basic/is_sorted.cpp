#include<iostream>
using namespace std;

bool isSorted(int *arr,int size)
{
    if(size==0 || size==1)
    {
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart=isSorted(arr+1,size-1);
        return remainingPart;
    }
}
int main()
{
    int n=5;
    int arr[5]={2,3,7,5,6};
    int ans=isSorted(arr,n);
    if(ans)
    {
        cout << "Array is Sorted";
    }
    else{
        cout <<"Array is not Sorted";
    }
}