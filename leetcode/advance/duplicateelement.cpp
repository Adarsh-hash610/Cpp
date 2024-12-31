#include<iostream>
using namespace  std;

void duplicate(int arr[],int n)

{
    if(n==1){
        cout << "[]";
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
            {
                cout << arr[j] << " ";
            }
        }
    }
    
}

int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout << "Enter the array: ";
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    duplicate(arr,n);

}