// print all the subsequence of the given array...
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void f(int index, vector<int>&ds,int arr[])
{
    if(index==3)
    {
        for(auto it:ds)
        {
            cout << it << " ";
        }
        if(ds.size()==0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }
    // take or pick the particular index into the subsequence...
    ds.push_back(arr[index]);
    f(index+1,ds,arr);
    ds.pop_back();

    // not take condition or pick, this element is not added to subsequence..
    f(index+1,ds,arr);
}

int main()
{
    int arr[]={3,1,2};
    vector<int>ds;
    f(0,ds,arr);
}