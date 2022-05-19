#include<iostream>
// #include<vector>
#include <queue>
using namespace std;

int main()
{
    //max heap using priority Queue
    priority_queue<int, vector<int>> maxheap;
    maxheap.push(7);
    maxheap.push(3);
    maxheap.push(4);
    maxheap.push(8);
    maxheap.push(9);

    cout<<"top element->"<<maxheap.top()<<endl;     //9
    cout<<"size of maxheap->"<<maxheap.size()<<endl;    //5
    maxheap.pop();
    cout<<"top element after pop->"<<maxheap.top()<<endl;       //8

    //min heap using priority Queue
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(7);
    minheap.push(3);
    minheap.push(4);
    minheap.push(8);
    minheap.push(9);

    cout<<"top element->"<<minheap.top()<<endl;     //3
    cout<<"size of maxheap->"<<minheap.size()<<endl;        //5
    minheap.pop();
    cout<<"top element after pop->"<<minheap.top()<<endl;       //4

}