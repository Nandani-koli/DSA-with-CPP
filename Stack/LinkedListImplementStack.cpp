#include <iostream>
using namespace std;
class node{
    int data;
    node* link;

    friend class stack;
};

class stack
{
    public:
        node* top = NULL;

    void push(int value)
    {
        node* newnode = new node;
        newnode->data = value;
        newnode->link = top;
        top = newnode;
    }

    void pop()
    {
        if(top == NULL)
        {
            cout<<"Stack underflow"<<endl;
            return;
        }
        node * topop = new node;
        topop = top ;
        top = top->link;

        delete topop;
        topop = NULL;
    }

    int Top()
    {
        return top->data;
    }
    void display()
    {
        node* temp = top;
        while (temp != NULL)
        {
            cout<<temp->data<<endl;
            temp = temp->link;
        } 
    }
    int size()
    {
        int count = 0;
        node* temp = top;
        while (temp != NULL)
        {
            count++;
            temp = temp->link;
        } 
        return count;
    }
};
int main()
{
    stack stack1;
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);

    cout<<"no of elements in stack->"<<stack1.size()<<endl;
    stack1.display();
    stack1.pop();
    cout<<"Top of stack after pop->"<<stack1.Top()<<endl;

}