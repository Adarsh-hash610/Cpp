// Cycle detection in an undirected graph...

#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int>>adjList;
    void createAdjList(int u,int v,bool direction){
        adjList[u].push_back(v);
        if(direction == 0)
        {
            adjList[v].push_back(u);
        }

    }

    void printEdge()
    {
        for(auto i:adjList)
        {
            cout << i.first <<"->";
            for(auto i: i.second)
            {
                cout << i <<",";
            }
            cout << endl;
        }
    }

    bool detectCycle(int src,unordered_map<int,bool>&visited)
    {
        visited[src] = 1;
        queue<pair<int,int>>q;
        q.push({src,-1});
        while(!q.empty())
        {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(auto adjacentNode : adjList[node])
            {
                if(!visited[adjacentNode])
                {
                    visited[adjacentNode] = 1;
                    q.push({adjacentNode,node});
                }

                else if(parent!=adjacentNode)
                {
                    cout << "cycle exists"<<endl;
                    return true;
                }
            }
        }
        cout << "cycle not exists";
        return false;
    }
};

int main()
{
    int n;
    cout << "Enter the number of nodes: ";
    cin >>n;
    int m;
    cout <<"Enter the number of edges: ";
    cin >> m;
    Graph g;
    for(int i = 0;i<m;i++)
    {
        int u,v;
        cin >> u >> v;
        g.createAdjList(u,v,0);
    }
    g.printEdge();
    int start;
    cout <<"Enter the starting node: ";
    cin>> start;
    unordered_map<int,bool>visited;
    g.detectCycle(start,visited);
}