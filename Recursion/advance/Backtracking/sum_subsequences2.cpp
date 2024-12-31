// this will print any one subsequence whose sum is eqaul to target value....
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool f(int i,int n,int arr[],vector<int>& ds,int s,int sum)
{
    if(i==n)
    {
        if(s==sum)
        {
            for(auto it:ds) cout << it <<" ";
            cout <<endl;
            return true;
        }
        else{
            return false;
        }
    }
    ds.push_back(arr[i]);
    s=s+arr[i];
    if(f(i+1,n,arr,ds,s,sum)==true)
    {
        return true;
    }
    s=s-arr[i];
    ds.pop_back();
    if(f(i+1,n,arr,ds,s,sum)==true)
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[]={1,2,1};
    int n=3;
    int i=0;
    int sum=2;
    int s=0;
    vector<int>ds;
    f(i,n,arr,ds,s,sum);
}