#include<iostream>
#include<vector>
using namespace std;

void f(int indx,int n,int arr[],vector<int>& temp,vector<vector<int>>& ans,int target)
{
    if(target==0)
    {
        for(auto it:temp)
            {
                cout << it <<" ";

            }
            cout << endl;
        return;
    }
    for(int i=indx;i<n;i++)
    {
        if(i>indx && arr[i]==arr[i-1])
        {
            continue;
        }
        if(arr[i]>target)
        {
            break;
        }
        temp.push_back(arr[i]);
        f(indx+1,n,arr,temp,ans,target-arr[i]);
        temp.pop_back();

    }
}

int main()
{
    int arr[]={1,1,2,5,6,7,10};
    vector<int>temp;
    vector<vector<int>>ans;
    int target=8;
    int indx=0;
    int n=7;
    f(indx,n,arr,temp,ans,target);
    
}