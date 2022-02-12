#include <iostream>
#include <stack>
using namespace std;
class Queue{
    stack<int> s1;
    stack<int> s2;

    public:
        void enqueue(int value)
        {
            s1.push(value);
        }

        int dequeue()
        {
            if(s1.empty() && s2.empty())
            {
                cout<<"No element in Queue"<<endl;
                return -1;
            }
            if(s2.empty())
            {
                while (!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            int topop = s2.top();
            s2.pop();
            return topop;
        }

        void dispaly()
        {
            while(!s1.empty())
            {
                cout<<s1.top()<<endl;
                s1.pop();
            }
        }
};
int main()
{
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);

    cout<<q1.dequeue()<<endl;
    q1.enqueue(50);
    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;
    // cout<<q1.dequeue()<<endl;

    return 0;
}