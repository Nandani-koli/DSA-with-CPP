#include <iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
};
void deleteAtHead(node* &head)
{
    if(head == NULL)
    {
        cout<<"list is empty";
        return;
    }

    node* temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = head->next ;
    node* todelete = head;
    head = head->next;

    delete todelete;
    todelete = NULL;
    
}
void deletenode(node* &head)
{
    if(head->next == head)
    {
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    node* tempprev ;
    while(temp->next != head)
    {
        tempprev = temp;
        temp = temp->next;
    }
    tempprev->next = head;
    delete temp;
    temp = NULL;

}
void insertAtHead(node* &head, int newvalue)
{
    node* newnode = new node;
    newnode->data = newvalue;

    if(head == NULL)
    {
        head = newnode;
        newnode->next = head;
        return;
    }

    node* temp = head;
    while(temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
    head = newnode;

}
void insertAtEnd(node* &head, int newvalue)
{
    node* newnode = new node;
    newnode->data = newvalue;

    if(head == NULL)
    {
        insertAtHead(head,newvalue);
        return;
    }

    node* temp = head;
    while(temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
}

void display(node* head)
{
    node* temp = head;
    do
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    } 
    while (temp != head);
    cout<<endl;
}

int main()
{
    node* head = NULL;

    insertAtHead(head,1);

    display(head);

    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);

    insertAtHead(head,0);

     display(head);

    //  deletenode(head);
    deleteAtHead(head);
     display(head);
}
