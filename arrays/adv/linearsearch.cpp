#include<iostream>
using namespace std;

int linearsearch(int arr[],int size,int key)
{
    int i,flag=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
           flag=1;
        }
        
    }
    return flag;

}

int main()
{
    int n,arr[100],i,key;
    cout << "Enter n: ";
    cin >> n;

    cout << "Enter the array: ";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key: ";
    cin >> key;
    int result=linearsearch(arr,n,key);
    if(result==1){
        cout << "key found" << endl;
    }
    else{ 
        cout << "key not found";
    }
}
