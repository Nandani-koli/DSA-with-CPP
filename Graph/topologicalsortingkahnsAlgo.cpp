#include<iostream>
#include<vector>
#include <queue>
using namespace std;
void toposort(int v,vector<int>&indegree,vector<int>g[])
{
    queue<int> q;
    for(int i=0; i<v; i++)
    {
        if(indegree[i] == 0)
            q.push(i);
    }
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for(int x: g[node])
        {
            indegree[x]--;
            if(indegree[x] == 0)
                q.push(x);
        }
    }
    cout<<endl;
}
int main()
{
    int v, e;
    cin>>v>>e;
    vector<int> g[v];
    vector<int> indegree(v,0);
    for(int i =0; i<e; i++)
    {
        int s,d;
        cin>>s>>d;
        g[s].push_back(d);
        indegree[d]++;
    }
    toposort(v,indegree,g);
}