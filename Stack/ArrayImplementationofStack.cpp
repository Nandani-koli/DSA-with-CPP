#include <iostream>
using namespace std;
#define capacity 5

class Stack{
    int *arr;
    int top;
     public:
        Stack()
        {
            arr = new int[capacity];
            top = -1;
        }

       void push(int data)
       {
           if(top== capacity-1)
           {
               cout<<"Stack overflow"<<endl;
               return;
           }
           top++;
           arr[top] = data;
       }
       void pop()
       {
           if(top == -1)
           {
               cout<<"Stack underflow"<<endl;
               return;
           }
           top--;
       }
       void Top()
       {
           if(top == -1)
           {
               cout<<"Stack underflow"<<endl;
               return;
           }
         cout<<arr[top]<<endl;
       }
       bool isempty()
       {
            return top == -1;
       }

    void display(){
     for(int i = 0; i<= top; i++)
     {
         cout<<arr[i]<<" ";
     }
     cout<<endl;
    }   
};

int main()
{ 
    Stack st;
    st.pop();           //Trying to pop out empty stack (stack underflow)
    cout<<st.isempty()<<endl;           //1 (true)
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.isempty()<<endl;           //0 (false)
    st.push(6);        //Trying to push element in full stack(stack overflow)
    st.Top();           //5

    st.display();
    st.pop();
    st.display();
}