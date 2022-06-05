#include <iostream>
using namespace std;
class hashing
{
    int idx;
    int *hashtable;
public:
    hashing()
    {
        hashtable = new int[10];
    }
    void insert(int key)            //O(1)
    {
        int idx = key % 10;
        hashtable[idx] = key;
    }

    void print()
    {
        for(int i = 0; i<10; i++)
        {
            cout<<hashtable[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    hashing hashtable1;
    hashtable1.insert(24);
    hashtable1.insert(52);
    hashtable1.insert(91);
    hashtable1.insert(67);
    hashtable1.insert(83);

    hashtable1.print();
}

// OUTPUT -> 
// 0 91 52 83 24 0 0 67 0 0 