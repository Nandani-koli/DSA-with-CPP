//shortest path in undirected graph using kahn's algorithm 
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> shortestpath(int v,int s, vector<pair<int,int>> g[])
{
    vector<int>dest(v,INT16_MAX);
    queue<int> q;
    dest[s] = 0;
    q.push(s);
    
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(auto it : g[node])
        {
            int i = it.first;
            int w = it.second;
            if(dest[i] > dest[node] + w)
            {
                dest[i] = dest[node] + w;
                q.push(i);
            }
        }
    }
    return dest;
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<pair<int,int>> g[v];
    for(int i=0; i<e; i++)
    {
        int s,d,wt;
        cin>>s>>d>>wt;
        g[s].push_back({d,wt});
        g[d].push_back({s,wt});
    }

    vector<int> ans =  shortestpath(v,1,g);
    for(int i = 0; i<ans.size(); i++)
    {
        cout<<"1 to "<<i<<"-> "<<ans[i]<<endl;
    }
}

// INPUT ->
// 9 10
// 0 1 2
// 0 3 1
// 1 2 3
// 3 4 2
// 2 6 1
// 4 5 1
// 5 6 1
// 6 7 3
// 6 8 2
// 7 8 1
// OUTPUT ->
// 0 2 5 1 3 4 5 8 7 
//output if starting node = 0
// 0 to 0-> 0
// 0 to 1-> 2
// 0 to 2-> 5
// 0 to 3-> 1
// 0 to 4-> 3
// 0 to 5-> 4
// 0 to 6-> 5
// 0 to 7-> 8
// 0 to 8-> 7

//output if start node = 1
// 1 to 0-> 2
// 1 to 1-> 0
// 1 to 2-> 3
// 1 to 3-> 3
// 1 to 4-> 5
// 1 to 5-> 5
// 1 to 6-> 4
// 1 to 7-> 7
// 1 to 8-> 6