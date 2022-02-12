#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int value)
        {
            data = value;
            next = NULL;
        }
};

class Queue {
    node* front;
    node* back;

    public:

        bool empty()
        {
            if(front == NULL)
            {
                return true;
            }
            return false;
        }

        void enqueue(int value)
        {
            node* newnode = new node(value);
            if(empty())
            {
                front = newnode;
                back = newnode;
                return;
            }
            back->next = newnode;
            back = newnode;
        }

        void dequeue()
        {
            if(empty())
            {
                cout<<"No element to remove in Queue"<<endl;
                return;
            }
            node* todelete = front;
            front = front->next ;

            delete todelete;
            todelete = NULL;
        }

        int peek()
        {
            if(empty())
            {
                cout<<"No element in Queue"<<endl;
                return -1;
            }
            return front->data;
        }

        void display()
        {
            node * n = front;
            while(n != NULL)
            {
                cout<<n->data<<" ";
                n = n->next;
            }
            cout<<endl;
        }
};

int main()
{
    Queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);

    q1.display();           //1 2 3 4 

    q1.dequeue();

    cout<<q1.peek()<<endl;      //2

    cout<<q1.empty()<<endl;     //0
    
}