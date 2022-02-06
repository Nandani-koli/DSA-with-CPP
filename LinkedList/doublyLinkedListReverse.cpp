#include <iostream>
using namespace std;
class node{
    public:
        int data;
        node*next;
        node*prev;
        
        node()
        {
            next = NULL;
            prev = NULL;
        }
};
void display(node* n)
{
    while(n != NULL)
    {
        cout<<n->data<<"->";
        n = n->next;
    }
    cout<<"NULL"<<endl;
}

node* reverse(node* head)
{
    node* current = head;
    node* prev = NULL;
    node* nextnode ;

    while(current != NULL)
    {
        nextnode = current->next;
        current->next = prev;

        prev = current;
        current = nextnode;
    }
    return prev;
}

int main()
{
    node* head = new node;
    node* second = new node;
    node* third = new node;
    node* Fourth = new node;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = Fourth;  
    
    Fourth->data = 4;
    Fourth->next = NULL;

    display(head);   
    node* newhead = reverse(head);

    display(newhead);
}