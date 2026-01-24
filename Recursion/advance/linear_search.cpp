#include<iostream>
using namespace std;

bool linearSearch(int *arr,int size,int key)
{
    if(size==0)
    {
        return false;
    }
    if(arr[0]==key) return true;
    else{
        int remainingPart=linearSearch(arr+1,size-1,key);
        return remainingPart;
    }
}
int main()
{
    int n=5;
    int arr[5]={2,5,3,8,6};
    int key;
    cout <<"Enter the key: ";
    cin>>key;
    int ans=linearSearch(arr,n,key);
    if(ans){
        cout << "key is found";
    }
    else{
        cout << "key is not found";
    }
}