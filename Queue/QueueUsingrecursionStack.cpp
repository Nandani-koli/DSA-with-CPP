#include <iostream>
#include <stack>
using namespace std;
class Queue{
    stack <int> s1;
    public:
    void enqueue(int value){
        s1.push(value);
    }

    int dequeue()
    {
        if(s1.empty() )
            {
                cout<<"No element in Queue"<<endl;
                return -1;
            }
        int x = s1.top();
        s1.pop();
        if(s1.empty())
        {
            return x;
        }
        int item = dequeue();
        s1.push(x);
        return item;
    }
};
int main()
{
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);

    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;
}