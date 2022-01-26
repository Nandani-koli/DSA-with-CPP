#include <iostream>
using namespace std;

class node{
    public: 
        int data;
        node * next;
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

void InsertAtGivenPosition(node* previous, int newvalue)
{
    //1. Check if previous node is null
    if(previous == NULL)
    {
        cout<<"previous can not be null"<<endl;
        return;
    }

    //2. prepare newnode
    node * newnode = new node;
    newnode->data = newvalue;

    //3.Insert newnode after previous node
    newnode->next = previous->next;
    previous->next = newnode;
}

void InsertAtEnd(node **head , int newvalue)
{
    //1. Prepare a new node 
    node * newnode = new node;
    newnode->data = newvalue;
    newnode->next = NULL;

    //2. if a linkedlist is empty, newnode will be head node
    if(*head == NULL)
    {
        *head = newnode;
        return;
    }

    //3. Find the last node
    node * last = *head;
    while(last->next != NULL)
    {
        last = last->next;
    }

    //4. Insert a newnode after last node
    last->next = newnode;
}


void InsertAtFront(node**head, int newvalue)
{
    //1. prepare new node
    node * newnode = new node;
    newnode->data = newvalue;

    //2. put newnode in front of current head 
    newnode->next = *head;

    //3. Move head of list to point newnode
    *head = newnode;
}

int main()
{   
    // InsertAtFront(&head, 0);
    node* head = new node;
    node* third = new node;

    head->data = 1;
    head->next = third;

    third->data = 3;
    third->next = NULL;

    InsertAtGivenPosition(head, 2);

    // InsertAtEnd(&head, 1);
    // InsertAtEnd(&head, 2);
    // InsertAtEnd(&head, 3);

    displayList(head);
}