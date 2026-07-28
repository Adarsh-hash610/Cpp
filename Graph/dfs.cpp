#include<iostream>
#include<list>
#include<vector>
#include<unordered_map>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int>>adjList;
    void addEdge(int u,int v,int direction)
    {
        adjList[u].push_back(v);
        if(direction == 0)
        {
            adjList[v].push_back(u);
        }
    }

    void printNode()
    {
        for(auto i:adjList)
        {
            cout << i.first<<"->";
            for(auto j:i.second)
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }

    void dfs(int start,int n, vector<int>&ans,unordered_map<int,bool>&visited)
    {
        visited[start] = true;
        ans.push_back(start);   
        for(auto i : adjList[start])
        {
            if(!visited[i])
            {
                dfs(i,n,ans,visited);
            }
        }


    }
};
int main()
{
    int n;      //nodes
    cout << "Enter the number of nodes: ";
    cin>>n;
    int m;      //edges
    cout << "Enter the number of edges: ";
    cin>> m;
    Graph g;
    for(int i = 0;i<m;i++)
    {
        int u,v;
        cin >> u>> v;
        g.addEdge(u,v,0);
    }
    g.printNode();
    int start;
    cout << "Enter the starting node: ";
    cin >> start;
    vector<int>ans;
    unordered_map<int,bool>visited;
    g.dfs(start,n,ans,visited);
    for(int i = 0;i<ans.size();i++)
    {
        cout << ans[i]<<" ";
    }
}