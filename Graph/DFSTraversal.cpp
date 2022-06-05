#include<iostream>
#include<vector>
using namespace std;
void dfs(int v, vector<int> &vis, vector<int> g[])
{
    vis[v] = 1;
    cout<<v<<" ";

    for(int x : g[v])
    {
        if(!vis[x])
        {
        dfs(x,vis,g);
        }
    }
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<int> graph[v+1];
    for(int i = 0; i<e; i++)
    {
        int s,d;
        cin>>s>>d;
        graph[s].push_back(d);
        graph[d].push_back(s);
    }    

    vector<int> vis(v+1,0);
    for(int i = 1; i <= v; i++)
    {
        if(!vis[i])
        {
            dfs(i,vis,graph);
        }
    }
    cout<<endl;
}

// INPUT->
// 7 6
// 1 5
// 1 7
// 2 3
// 2 4
// 3 6
// 4 6
// OUTPUT->
// 1 5 7 2 3 6 4