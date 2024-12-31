// print all the subsequence whose sum is equal to the target...

#include<iostream>
#include<vector>
using namespace std;

void f(int i,int n,int arr[],vector<int>& ds,int s,int sum)
{
    if(i==n)
    {
        if(s==sum)
        {
            for(auto it: ds)
            {
                cout << it <<" ";

            }
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[i]);
    s=s+arr[i];
    f(i+1,n,arr,ds,s,sum);
    s=s-arr[i];
    ds.pop_back();
    f(i+1,n,arr,ds,s,sum);

}
int main()
{
    int arr[]={1,2,1};
    vector<int>ds;
    int sum=2;
    int s=0;
    int i=0;
    f(i,3,arr,ds,s,sum);
    return 0;
}