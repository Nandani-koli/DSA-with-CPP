#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void displayList(node *n)
{
    while (n != NULL)
    {
        cout<<n->data<<"->";
        n = n->next;
    }
    cout<<"NULL"<<endl;
    
}

void deleteAtEnd(node * head)
{
    //1. check if linked list is empty or head is only node
    if(head == NULL)
    {
        cout<<"List is empty";
  
        return;
    }
    else if(head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }

    //2. create two nodes which will use to point nth node and n-1 th node of list
    node * temp = head;
    node * temp2 = head;

    //3. find the last node 
    while (temp->next != NULL)
    {
       temp2 = temp;
       temp = temp->next;
    }
    
    //4. Delete the last node and null the next of n-1 node
    temp2->next = NULL;
    delete temp;
    temp = NULL;

}

int main()
{
    node* head = new node;
    node* second = new node;
    node* third = new node;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    deleteAtEnd(head);
    displayList(head);
    
}