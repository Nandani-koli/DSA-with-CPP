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

node* iterativeReverse(node* head)
{
    //1.Create three pointers 
   node* previous = NULL;
   node* current = head;
   node* nextptr;

    //2. iterate till last element
   while(current != NULL)
   {
       nextptr = current->next;         //current pointer next store in nextpointer (increment nextptr by 1)
       current->next = previous;        //current next value point previous 
     //null<-1<-2<-3<-4

       previous = current;              //increment previous by 1
       current = nextptr;               //increment current by 1

   }
   return previous;
}

node* recursiveReverse(node * head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    node* newhead = recursiveReverse(head->next);

    head->next->next = head;
    head->next = NULL;

    return newhead;
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

    display(head);                  //1->2->3->4->NULL

    // node* newhead = iterativeReverse(head);

    node* newhead = recursiveReverse(head);

    display(newhead);               //4->3->2->1->NULL

}