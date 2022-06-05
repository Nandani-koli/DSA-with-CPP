#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<string> uset;
    uset.insert("nandini");
    uset.insert("koli");
    uset.insert("helloWorld");
    uset.insert("tutorial");

//both "for loop" print same value or elements of unorderd set
    for(auto it : uset)
    {
        cout<<it<<endl;
    }

    for(auto it = uset.begin() ; it != uset.end(); it++)
    {
        cout<<(*it)<<endl;
    }

    cout<<"Size of set->"<<uset.size()<<endl;

    auto key = uset.find("koli");
    if(key != uset.end())
    {
        cout<<"Key is found->"<<(*key)<<endl;
    }

    //count() -> it return 1 if key is present 0 if not
    if(uset.count("koli"))
    {
        cout<<"key is found"<<endl;
        uset.erase("koli");
    }

      for(auto it : uset)
    {
        cout<<it<<endl;
    }
}
