#include <iostream>
#include<map>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int> umap;

    umap["john"] = 56;
    umap["peter"] = 90;
    umap["Alex"] = 78;
    umap["selena"] = 67;
    umap.insert({"koli", 99});

    for(auto it : umap)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    if(umap.find("koli") != umap.end())
    {
        cout<<"key is found"<<endl;
    }

    cout<<"size-> "<< umap.size()<<endl;        //5

    cout<<umap.erase("selena")<<endl;       //1

    cout<<"size-> "<< umap.size()<<endl;        //4

   //Que-> find frequency of elements 
    unordered_map<string,int> names;
    int N;
    cin>>N;
    for(int i = 0; i < N; i++)
     {
         string x;
         cin>>x;
         names[x]++;
     }
     for(auto it : names)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
/* 
INPUT-> 
8
abc
jkl
abc
kol
kol
abc
pop
you

OUTPUT ->
you 1
pop 1
kol 2
jkl 1
abc 3
*/
