#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void optimizedPrimsAlgo(int s,int v, vector<pair<int,int>> g[])
{
    int key[v];
    bool mst[v];
    int parent[v];
    for(int i =0; i< v; i++)
        key[i] = INT8_MAX, mst[i] = false, parent[i] = -1;

    key[s] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0,0});

    while (!pq.empty())
    {
        int node = pq.top().second;
        pq.pop();
        mst[node] = true;

        for(auto it : g[node])
        {
            int adj = it.first;
            int w = it.second;
            if(mst[adj] == false && key[adj] > w)
                key[adj] = w, parent[adj] = node, pq.push({w,adj});
        }
    }

    for(int i =0; i<v; i++)
        cout<<parent[i]<<" -> "<<i<<" at cost of "<<key[i]<<endl;
    
    int sum = 0;
    for(int i=0; i<v; i++)
        sum += key[i];

    cout<<"Cost of minimum spanning tree for given graph is -> "<<sum<<endl;
}

void primsAlgo(int s,int v, vector<pair<int,int>> g[])
{
    int key[v];
    bool mst[v];
    int parent[v];
    for(int i =0; i< v; i++)
        key[i] = INT8_MAX, mst[i] = false, parent[i] = -1;

    key[s] = 0;

    for(int i=0; i<v-1; i++)    //this loop is run for n-1 edges 
    {
        int min = INT8_MAX;
        int node;

        for(int j = 0; j < v; j++)      //this loop is for picking the min element from key[]
        {
            if(mst[j] == false && key[j] < min)
            {
                min = key[j];
                node = j;
            }
        }
        mst[node] = true;
        for(auto it : g[node])
        {
            int adj = it.first;
            int w = it.second;
            if(mst[adj] == false && key[adj] > w)
                key[adj] = w, parent[adj] = node;
        }
    }
    for(int i =0; i<v; i++)
        cout<<parent[i]<<" -> "<<i<<" at cost of "<<key[i]<<endl;
    
    int sum = 0;
    for(int i=0; i<v; i++)
        sum += key[i];

    cout<<"Cost of minimum spanning tree for given graph is -> "<<sum<<endl;
}
int main()
{
     int v,e;
    cin>>v>>e;
    vector<pair<int,int>> g[v];
    for(int i = 0; i<e; i++)
    {
        int s,d,wt;
        cin>>s>>d>>wt;
        g[s].push_back({d,wt});
        g[d].push_back({s,wt});
    }
    // primsAlgo(0,v,g);
    optimizedPrimsAlgo(0,v,g);
}


// INPUT -> 
// 5 6
// 0 1 2
// 1 2 3
// 0 3 6
// 3 1 8
// 1 4 5
// 4 2 7

// OUTPUT->
// -1 -> 0 at cost of 0
// 0 -> 1 at cost of 2
// 1 -> 2 at cost of 3
// 0 -> 3 at cost of 6
// 1 -> 4 at cost of 5
// Cost of minimum spanning tree for given graph is -> 16