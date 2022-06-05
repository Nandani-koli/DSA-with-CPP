#include<iostream>
#include <vector>
#include<stack>
using namespace std;
void toposort(int node,vector<bool>&vis,stack<int>&st, vector<int>g[])
{
    vis[node] = 1;
    for(auto it: g[node])
    {
        if(!vis[it])
        { 
           toposort(it,vis,st,g);
        }
    }
    st.push(node);
}
int main()
{
    int v, e;
    cin>>v>>e;
    vector<int> g[v];
    for(int i =0; i<e; i++)
    {
        int s,d;
        cin>>s>>d;
        g[s].push_back(d);
    }
    stack<int> st;
    vector<bool> vis(v,0);
    for(int i =0; i<v; i++)
    {
        if(!vis[i])
        {
            toposort(i,vis,st,g);
        }
    }

    vector<int> topo;
    while (!st.empty())
    {
        topo.push_back(st.top());
        st.pop();
    }
    
    for(int i =0; i<topo.size(); i++)
    {
        cout<<topo[i]<<" ";
    }
    cout<<endl;
}

// INPUT->
// 6 7
// 0 1
// 0 4
// 1 2
// 4 5
// 2 3
// 5 3
// 4 2
// OUTPUT->
// 0 4 5 1 2 3 