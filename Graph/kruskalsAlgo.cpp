#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

struct  node
{
    int a,b,wt;
    node(int weight,int first,int second)
    {
        a = first;
        b = second;
        wt = weight;
    }
};
bool comp(node a, node b)
{
    return  a.wt < b.wt; 
}

int find(int x, vector<int> &parent)
{
    if(parent[x] == x) return x;
    return parent[x] = find(parent[x],parent);
}
void Unionn(int a,int b,vector<int> &parent, vector<int> &Rank)
{
    a = find(a,parent);
    b = find(b,parent);

    if(Rank[a] < Rank[b])
        parent[a] = b;
    else if(Rank[b] < Rank[a])
        parent[b] = a;
    else
        parent[a] = b, Rank[b]++;
}

int main()
{
    int n,e;
    cin>>n>>e;
    vector<node> edges;
    for(int i =0; i<e; i++)
    {
        int s,d,wt;
        cin>>s>>d>>wt;
        edges.push_back(node(wt,s,d));
    }
    sort(edges.begin(),edges.end(),comp);

    vector<int> parent(n+1);
    for(int i = 1; i<n+1; i++)
        parent[i] = i;

    vector<int> Rank(n+1,0);
    int cost = 0;
    vector<pair<int,int>> mst;

    for(auto it : edges)
    {
        if(find(it.a,parent) != find(it.b,parent))
        {
            cost += it.wt;
            mst.push_back({it.a,it.b});
            Unionn(it.a,it.b,parent,Rank);
        }
    }

    cout<<cost<<endl;
    for(auto it : mst)
        cout<<it.first<<" -> "<<it.second<<endl;

    return 0;
}

// INPUT ->
// 6 9
// 1 4 1
// 1 2 2
// 2 3 3
// 2 4 3
// 1 5 4
// 3 4 5
// 2 6 7
// 3 6 8
// 5 4 9

// OUTPUT->
// 17
// 1 -> 4
// 1 -> 2
// 2 -> 3
// 1 -> 5
// 2 -> 6

