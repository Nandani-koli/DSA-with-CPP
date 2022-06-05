#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void toposort(int node, stack<int>&st, vector<int>&vis, vector<pair<int,int>> g[])
{
    vis[node] = 1;
    for(auto it : g[node])
    {
        if(!vis[it.first]) toposort(it.first,st,vis,g);
    }
    st.push(node);
}

void shortestpathDAG(int s, int v, vector<pair<int,int>> g[])
{
    vector<int> vis(v,0);
    stack<int> st;
    for(int i = 0; i<v; i++)
    { 
        if(!vis[i]) toposort(i,st,vis,g);
    }

    int dist[v];
    for(int i =0; i<v; i++)
        dist[i] = 1e9;
    
    dist[s] = 0;

    while (!st.empty())
    {
        int node = st.top();
        st.pop();
        if(dist[node] != 1e9)
        {
            for(auto it : g[node])
            {
                if(dist[node] + it.second < dist[it.first])
                    dist[it.first] = dist[node] + it.second;
            }
        }
    }

    for(int i =0; i<v; i++)
    {
        (dist[i] == 1e9)? cout<<"INF ": cout<<dist[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<pair<int,int>> g[v];
    for(int i =0; i<e; i++)
    {
        int s,d,wt;
        cin>>s>>d>>wt;
        g[s].push_back({d,wt});
    }
    shortestpathDAG(1,v,g);
}


// INPUT->
// 6 7
// 0 1 2
// 0 4 1
// 1 2 3
// 4 5 4
// 2 3 6
// 5 3 1
// 4 2 2
// OUPUT-> 
// shortest path from 0 to other nodes
// 0 2 3 6 1 5 
