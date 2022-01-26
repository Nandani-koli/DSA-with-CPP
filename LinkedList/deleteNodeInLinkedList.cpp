#include <iostream>
using namespace std;

class node{
    public: 
    int data;
    node* next;
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

void deleteNode(node* head, int value)
{
    if(head == NULL)
    {
        return;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = NULL;
    }

    node* temp = head;
    node * temp2 = head;

    while (temp->data != value)
    {
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = temp->next;
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

    deleteNode(head, 2);
    display(head);

}