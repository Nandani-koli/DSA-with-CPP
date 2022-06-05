#include<iostream>
#include<vector>
#include<queue>
using namespace std;

bool iscycle(int s,vector<bool> &vis,vector<int> g[])
{
    queue<pair<int,int>> q;
    q.push({s,-1});
    vis[s] = 1;

    while (!q.empty())
    {
        int node = q.front().first;
        int prev = q.front().second;
        q.pop();
        for(auto it : g[node])
        {
            if(!vis[it])
            {
                q.push({it,node});
                vis[it] = 1;
            }
            else if(prev != it) 
                return true;
        }
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
           if(iscycle(i,vis,g)) return true;
        }
    }
    return false;
}

int main()
{
    int v, e;
    cin >> v >> e;
    vector<int> g[v + 1];
    for (int i = 0; i < e; i++)
    {
        int s, d;
        cin >> s >> d;
        g[s].push_back(d);
        g[d].push_back(s);
    }
    vector<bool> vis(v+1,0);

    if(disconnectGraph(v,vis,g))
        cout<<"cycle is present"<<endl;
    else 
        cout<<"Cycle is not present"<<endl;

}
// INPUT->
// 11 10
// 1 2
// 2 4
// 3 5
// 5 6
// 6 7
// 5 10
// 7 8
// 10 9
// 9 8
// 8 11
// OUTPUT->
// cycle is present