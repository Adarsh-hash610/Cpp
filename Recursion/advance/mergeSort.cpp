#include<iostream>
using namespace std;
void merge(int *arr,int s,int e)
{
    int mid=(s+e)/2;
    int length1=mid-s+1;
    int length2=e-mid;

    int *arr1=new int[length1];
    int *arr2=new int[length2];

    int mainIndexArray=s;
    for(int i=0;i<length1;i++)
    {
        arr1[i]=arr[mainIndexArray++];
    }
    mainIndexArray=mid+1;
    for(int i=0;i<length2;i++)
    {
        arr2[i]=arr[mainIndexArray++];
    }

    int index1=0;
    int index2=0;
    mainIndexArray=s;
    while(index1<length1 && index2<length2)
    {
        if(arr1[index1]<arr2[index2])
        {
            arr[mainIndexArray++]=arr1[index1++];

        }
        else{
            arr[mainIndexArray++]=arr2[index2++];
        }
    }
    while(index1<length1)
    {
        arr[mainIndexArray++]=arr1[index1++];
    }
    while (index2<length2)
    {
        arr[mainIndexArray++]=arr2[index2++];
    }
    delete []arr1;
    delete []arr2;
    
}
void mergeSort(int *arr,int s,int e)
{
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;

    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}
int main()
{
    int arr[5]={6,3,5,1,8};
    int n=5;
    //cout << "Hello";
    mergeSort(arr,0,n-1);
    //cout <<"Hello";
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }cout <<endl;
    return 0;
}