#include<iostream>
using namespace std;
#define size 5
class Queue {
    int *arr;
    int front;
    int back;

    public:
        Queue()
        {
            arr = new int[size];
            front = -1;
            back = -1;
            for(int i=0;i<size;i++)
            {
               arr[i] = 0;
            }
        }

        bool empty()
        {
            if(front == -1 && back == -1 || front > back)
            {
                return true;
            }
            return false;
        }

        bool isFull()
        {
            if(back == size-1)
            {
                return true;
            }
            return false;
        }

        void enqueue(int value)
        {
            if(empty())
            {
                front = 0;
                back = 0;
                arr[back] = value;
            }
            else if(isFull())
            {
                cout<<"Queue is Full"<<endl;
                return;
            }
            else{
                back++;
                arr[back] = value;
            }
        }

        void dequeue()
        {
            if(empty())
            {
                cout<<"Queue is empty"<<endl;
                return;
            }
            else if(front == back)
            {
                arr[front] = 0;
                front = -1;
                back = -1;
            }
            else{
                arr[front] = 0;
                front++;
            }
        }

        int peek()
        {
            if(empty())
            {
                return -1;
            }
            return arr[front];
        }
        void display()
        {
            for(int i = front; i<= back; i++)
            {
                cout<<arr[i]<<" ";
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

    q1.display();       //1 2 3 4 

    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    cout<<q1.empty()<<endl;        //1
    cout<<q1.peek()<<endl;         //-1

    q1.enqueue(4);

    cout<<q1.peek()<<endl;          //4

}