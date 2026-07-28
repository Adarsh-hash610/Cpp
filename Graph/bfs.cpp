#include<iostream>
#include<list>
#include<unordered_map>
#include<vector>
#include<queue>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int>>adjList;
    
    void addEdge(int u,int v,bool direction)
    {
        adjList[u].push_back(v);
        if(direction==0)
        {
            adjList[v].push_back(u);
        }
    }

    void bfs(int start,int n,vector<int>&ans){
        unordered_map<int,bool>visited;
        queue<int>q;

        // start bfs...
        q.push(start);
        visited[start] = true;
        while(!q.empty())
        {
            int frontNode = q.front();
            ans.push_back(frontNode);
            q.pop();
            for(auto i:adjList[frontNode])
            {
                if(!visited[i])
                {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
    }

    void printEdge()
    {
        for(auto i:adjList)
        {
            cout << i.first<<"->";
            for(auto j:i.second)
            {
                cout << j <<",";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;      //nodes
    cout << "Enter the number of nodes: ";
    cin >> n;
    int m;      //edges
    cout << "Enter the number of edges: ";
    cin >> m;
    Graph g;
    for(int i = 0;i<m;i++)
    {
        int u,v;
        cin >>u>>v;
        g.addEdge(u,v,0);
    }
    g.printEdge();
    int start;
    cout << "Enter the starting node: ";
    cin >> start;
    vector<int>ans;
    g.bfs(start,n,ans);
    cout << "bfs traversal: ";
    for(int i = 0;i<ans.size();i++)
    {
        cout << ans[i]<<" ";
    }
    return 0;
}
