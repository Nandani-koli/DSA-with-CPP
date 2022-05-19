#include <iostream>
#include<queue>
using namespace std;
priority_queue<int,vector<int>> maxheap;
priority_queue<int, vector<int>, greater<int>> minheap;
    
void insert(int num)
{
    if(maxheap.empty() || maxheap.top() > num)
    {
        maxheap.push(num);
    }
    else{
        minheap.push(num);
    }
    if(maxheap.size() > minheap.size() +1)
    {
        minheap.push(maxheap.top());
        maxheap.pop();
    }
    else if(minheap.size() > maxheap.size() + 1)
    {
        maxheap.push(minheap.top());
        minheap.pop();
    }
}

double median()
{
    if(maxheap.size() == minheap.size())
    {
        return (maxheap.top()+minheap.top())/2.0;
    }
    else if(maxheap.size() > minheap.size())
    {
        return maxheap.top();
    }
    else{
        return minheap.top();
    }
}
int main()
{
    insert(5);
    cout<<median()<<endl;
    insert(2);
    cout<<median()<<endl;
    insert(3);
    cout<<median()<<endl;
    insert(7);
    cout<<median()<<endl;
    insert(1);
    cout<<median()<<endl;
    insert(9);
    cout<<median()<<endl;
}

/*
5 2 3 7 1 9 
output->
5
3.5
3
4
3
4

Explanation->
1) 5 
2) 5+2/2 = 3.5
3) 2 3 5 => 3
4) 2 3 5 7 => 3+5/2 => 4
5) 1 2 3 5 7 => 3
6) 1 2 3 5 7 9 => 3+5/2 => 4

*/