#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void bfs(int v, vector<bool> &vis, vector<int> g[])
{
    queue<int> q;
    q.push(v);
    vis[v] = true;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (auto it : g[node])
        {
            if (!vis[it])
            {
                q.push(it);
                vis[it] = 1;
            }
        }
    }
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

    vector<bool> vis(v + 1, 0);
    for (int i = 1; i < v + 1; i++)
    {
        if (!vis[i])
        {
            bfs(i, vis, g);
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
// 1 5 7 2 3 4 6