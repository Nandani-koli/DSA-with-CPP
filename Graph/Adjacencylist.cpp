#include <iostream>
#include <vector>
using namespace std;
void unweightedGraph()
{
    int v,e;
    cin>>v>>e;

    vector<int> graph[v+1];
    for(int i = 0; i < e; i++)
    {
        int s,d;
        cin>>s>>d;

        graph[s].push_back(d);
        graph[d].push_back(s);
    }

    for(int i = 1; i<v+1; i++)
    {
        cout<<i<<" -> ";
        for(int x : graph[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }

// INPUT->
// 7 6
// 1 2 
// 1 3
// 2 4
// 2 5
// 2 6
// 3 7

// OUTPUT->
// 1 -> 2 3 
// 2 -> 1 4 5 6 
// 3 -> 1 7 
// 4 -> 2 
// 5 -> 2 
// 6 -> 2 
// 7 -> 3 
}

void weightedGraph()
{
    int v,e;
    cin>>v>>e;

    vector<pair<int,int>> graph[v+1];
    for(int i =0; i<e; i++)
    {
        int s, d, wt;
        cin>>s>>d>>wt;

        graph[s].push_back({d,wt});
        graph[d].push_back({s,wt});
    }

    for(int i =1; i < v+1; i++)
    {
        cout<<i<<" -> ";
        for(auto it :graph[i])
        {
            cout<<"("<<it.first<<","<<it.second<<"), ";
        }
        cout<<endl;
    }
// INPUT->
// 7 6
// 1 2 19
// 1 3 20
// 2 4 11
// 2 5 12
// 2 6 13
// 3 7 15

// OUTPUT->
// 1 -> (2,19), (3,20), 
// 2 -> (1,19), (4,11), (5,12), (6,13), 
// 3 -> (1,20), (7,15), 
// 4 -> (2,11), 
// 5 -> (2,12), 
// 6 -> (2,13), 
// 7 -> (3,15),

}

int main()
{
     //Adjacency list for unweighted graph
    unweightedGraph();


    //Adjacency list for Weighted graph
    weightedGraph();
}
