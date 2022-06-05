#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Adjacency matrix for unweighted graph
    int v,e;
    cin>>v>>e;
    vector<vector<int>> graph(v+1, vector<int>(v+1, 0));

    for(int i = 0; i< e; i++)
    {
        int s,d;
        cin>>s>>d;
        graph[s][d] = 1;
        graph[d][s] = 1;
    }

    for(int i = 1; i< v+1; i++)
    {
        for(int j = 1; j < v+1; j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
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
// 0 1 1 0 0 0 0 
// 1 0 0 1 1 1 0 
// 1 0 0 0 0 0 1 
// 0 1 0 0 0 0 0 
// 0 1 0 0 0 0 0 
// 0 1 0 0 0 0 0 
// 0 0 1 0 0 0 0 