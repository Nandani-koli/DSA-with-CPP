#include<iostream>
#include<vector>
using namespace std;
bool iscycle(int node, int prev, vector<bool>&vis, vector<int>g[])
{
    vis[node] = 1;
    for(auto it : g[node])
    {
        if(!vis[it])
        {
        if(iscycle(it,node,vis,g)) return true;
        }
        else if(it != prev) return true;
    }
    return false;
}

bool disconnectGraph(int v,vector<bool> &vis, vector<int>g[])
{
    //check for every component of disconnected graph
    for(int i =1; i<=v; i++)
    {
        if (!vis[i])
        {
           if(iscycle(i,-1,vis,g)) return true;
        }
    }
    return false;
}

int main()
{
    int v,e;
    cin>>v>>e;
    vector<int> g[v+1];
    for(int i = 0; i<e; i++)
    {
        int s,d;
        cin>>s>>d;
        g[s].push_back(d);
        g[d].push_back(s);
    }
    vector<bool> vis(v+1,0);

    if(disconnectGraph(v,vis,g))
        cout<<"cycle is present"<<endl;
    else 
        cout<<"Cycle is not present"<<endl;
    
}