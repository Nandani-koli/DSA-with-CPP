#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node * prev;
    node * next;

    node()
    {
        prev = NULL;
        next = NULL;
    }
};

void deleteNode(node*head, int deletevalue)
{
    //1. check if head is null or only element 
    if(head == NULL)
    {
        return;
    }
    else if(head->next == NULL)
    {
        delete head;
        head = NULL;
    }

    //2. find element to delete 
    node * temp = head;
    while (temp->data != deletevalue)
    {
        temp = temp->next;
    }

    //3. put temp-> next in temp->prev node
    node* tempprev = temp->prev;
    node* tempnext = temp->next;
    tempprev->next = temp->next;
    tempnext->prev = temp->prev;

    //4. delete temp
    delete temp;
    temp = NULL;
    
}

void insertAtGivenPosition(node* head, int prevdata, int newvalue)
{
    //1. check if head is null
    if(head == NULL)
    {
        return;
    }

    //2 prepare newnode 
    node * newnode = new node();
    newnode->data = newvalue;

    //3. find previous node 
    node * previous = head;
    while (previous->data != prevdata)
    {
      previous = previous->next ;
    }
    
    //4. put newnode after previous
    node * prevnext = previous->next;
    newnode->next = previous->next;
    prevnext->prev = newnode;
    newnode->prev = previous;
    previous->next = newnode;
}

void insertAtfront(node* &head, int newvalue)
{
    //1. prepare newnode
    node* newnode = new node();
    newnode->data = newvalue;

    //2. put it in front of head
    newnode->next = head;
    head->prev = newnode;

    ////move head of list to point newnode
    head = newnode;

}

void insertAtEnd(node** head, int newvalue)
{
     //1. create a newnode;
    node* newnode = new node();
    newnode->data = newvalue;

    //2. if linked list is empty
    if(*head == NULL)
    {
        *head = newnode;
        return;
    }

    //3 find last node in list
    node* last = *head;
    while (last->next != NULL)
    {
        last = last->next;
    }

    //4 insert newnode after lastnode
    last->next = newnode;
    newnode->prev = last;
    
}

void display(node* n)
{
    while (n != NULL)
    {
        cout<<n->data<<"->";
        n = n->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    // node * head = new node(1);
    // node * second = new node(2);

    // head->next = second;

    // second->next = NULL;
    // second->prev = head;
    node*head = new node();
    head = NULL;

    // insertAtEnd(&head, 2);
    // display(head);
    // insertAtfront(head, 0);
    // display(head);

    int n,num;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>num;
        insertAtEnd(&head, num);
    }
     display(head);

    //  cout<<"insert 4 after 3"<<endl;
    //  insertAtGivenPosition(head,3,4);
    //  display(head);

     deleteNode(head,3);

     cout<<"List after deleting 3->"<<endl;
     display(head);
}