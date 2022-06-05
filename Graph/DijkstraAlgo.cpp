#include <iostream>
#include<vector>
#include<queue>
using namespace std;
void shortestpath(int src, vector<int>&dist, vector<pair<int,int>> g[])
{
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    dist[src] = 0;
    pq.push({0,src});

    while (!pq.empty())
    { 
       int node = pq.top().second;
       int distance = pq.top().first;
       pq.pop();

       for(auto it : g[node])
       {
           if(dist[it.first] > distance + it.second)
           {
                dist[it.first] = distance + it.second;
                pq.push({dist[it.first],it.first});
           }
       }
    }
  for(int i =0; i<dist.size(); i++)
    cout<<dist[i]<<" ";

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
        g[d].push_back({s,wt});
    }
    vector<int> dist(v,1e9);
     shortestpath(0,dist,g);

}

// INPUT ->
// 5 6
// 1 2 2
// 2 5 5
// 1 4 1
// 4 3 3 
// 2 3 4
// 3 5 1

// OUTPUT->
// 0 2 4 1 5 
