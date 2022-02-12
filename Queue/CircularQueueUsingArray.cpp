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

        bool empty()            //it will not give accurate result
        {
            if(front == -1 && back == -1)
            {
                return true;
            }
            return false;
        }

        bool isFull()
        {
            if(front == (back+1)%size)
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
                back = (back+1)%size;
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
                front = (front+1)%size;
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
            for(int i = 0; i< size; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};
int main()
{
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    cout<<q1.isFull()<<endl;        //1(true)
    q1.display();       //10 20 30 40 50 

    q1.dequeue();       
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    
    q1.enqueue(60);

     q1.display();          //60 0 0 0 50 

}