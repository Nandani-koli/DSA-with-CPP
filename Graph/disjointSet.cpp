#include<iostream>
using namespace std;
#define n 100000
int parent[n];
int Rank[n];
void makeset(int i)
{
    parent[i] = i;
    Rank[i] = 0;
} 

int find(int x)
{
    if(parent[x] == x) return x;

    return parent[x] = find(parent[x]);
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);

    if(Rank[a] > Rank[b])
        parent[b] = a;
    else if(Rank[b] > Rank[a])
        parent[a] = b;
    else
        parent[b] = a , Rank[a]++;

}
int main()
{
    int e,k;        //e is no of indiviual elements and k is no of union operations
    cin>>e>>k;
    for(int i = 1; i<=e; i++)
    {
        makeset(i);
    }

    while (k--)
    {
        int a,b;
        cin>>a>>b;
        Union(a,b);
    }
    //if two elements belong to same component or not
    if(find(4) == find(3)) cout<<"same component "<<endl;
    else cout<<"Different component"<<endl;

    //find number of components
    int compoCount = 0;
    for(int i =1; i<=e; i++)
    {
        if(find(i) == i) compoCount++;
    }
    cout<<compoCount<<endl;
}

// INPUT->
// 7 6
// 1 2
// 2 3
// 4 5
// 6 7
// 5 6
// 3 7
// OUTPUT->
// same component 
// 1

// 7 5
// 1 2
// 2 3
// 4 5
// 6 7
// 5 6
// Different component
// 2