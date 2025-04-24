#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main()
{
    int arr[5]={3,5,2,6,1};
    priority_queue<int>pq;
    for(int i=0;i<5;i++)
    {
        pq.push(arr[i]);
    }

    cout<<pq.top();
    cout <<endl;
    pq.pop();
    cout<<pq.top();
}

