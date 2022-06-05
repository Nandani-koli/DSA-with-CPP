#include<iostream>
#include<vector>
using namespace std;
struct node{
    int s,d,wt;
    node(int first,int second,int weight)
    {
        s = first;
        d = second;
        wt = weight;
    }
};

int main()
{
    int n,e;
    cin>>n>>e;
    vector<node> edges;
    for(int i =0; i<e; i++)
    {
        int s,d,wt;
        cin>>s>>d>>wt;
        edges.push_back(node(s,d,wt));
    }

    vector<int> dist(n,INT8_MAX);
    dist[0] = 0;
    for(int i = 0; i < n-1; i++)
    {
        for(auto it: edges)
        {
            if(dist[it.s]+it.wt < dist[it.d])
                dist[it.d] = dist[it.s] + it.wt;
        }
    }

    bool flag = false;

        for(auto it: edges)
        {
            if(dist[it.s]+it.wt < dist[it.d])
            {
                flag = true;
                cout<<"Negative Cycle "<<endl;
            }
        }
    
    if(!flag)
    {
        for(int i = 0; i < n; i++)
        {
            cout<<i<<" "<<dist[i]<<endl;
        }
    }
}

// 6 7
// 0 1 5
// 1 2 -2
// 2 4 3
// 1 5 -3
// 5 3 1
// 3 4 -2
// 3 2 6

// OUTPUT_>
// 0 0
// 1 5
// 2 3
// 3 3
// 4 1
// 5 2