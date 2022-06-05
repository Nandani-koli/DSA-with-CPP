// Cycle detection in directed graph using DFS
#include <iostream>
#include <vector>
using namespace std;

bool iscycle(int node, vector<bool>&vis, vector<bool> &dfstrack, vector<int> g[])
{
    vis[node] = 1;
    dfstrack[node] = 1;
    for(auto it : g[node])
    {
        if(!vis[it])
        {
        if(iscycle(it,vis,dfstrack,g)) return true;
        }else if(dfstrack[it]) return true;
    }
    dfstrack[node] = 0;
    return false;
}

bool disconnectgraph(int v, vector<bool>&vis, vector<bool> &dfstrack, vector<int> g[])
{
    for(int i = 1; i<= v; i++)
    {
        if(!vis[i])
        {
            if(iscycle(i,vis,dfstrack,g)) return true;
        }
    }
    return false;
}

int main()
{
    int v,e;
    cin>>v>>e;
    vector<int> g[v+1];
    for (int i = 0; i < e; i++)
    {
        int s,d;
        cin>>s>>d;
        g[s].push_back(d);
    }
    vector<bool> vis(v+1,0);
    vector<bool> dfstrack(v+1,0);
    if(disconnectgraph(v,vis,dfstrack,g))
    {
        cout<<"Cycle is present";
    }
    else{
        cout<<"Cycle is not present";
    }
}

// INPUT -> 
// 9 10
// 1 2
// 2 3
// 3 4
// 3 6
// 4 5
// 6 5
// 7 2
// 7 8
// 8 9
// 9 7
// OUTPUT->
// Cycle is present