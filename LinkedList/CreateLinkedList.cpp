#include <iostream>
using namespace std;
//single node of list containing data and address of next node 
class node{
    public:
        int data;
        node* next;
    
};

//function to print nodes of linkedlist
void display(node* n)
{
    while (n != NULL)
    {
        cout<< n->data <<"->" <<n->next<<endl;
        n = n->next;
    }  

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

    display(head);

}


// OUTPUT -> 
// 1->0x55bf70166ed0
// 2->0x55bf70166ef0
// 3->0


//For understand how pointers work 


// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 10;
//     int * ptr = &n;
//     cout<<ptr<<" "<<&ptr<<" "<<*ptr<<endl;

//     int **ptr2 = &ptr;
//     cout<<ptr2<<" "<<&ptr2<<" "<<*ptr2<<endl;
    
// }

// OUTPUT -> 
// 0x7fff3aba4cf4 0x7fff3aba4cf8 10
// 0x7fff3aba4cf8 0x7fff3aba4d00 0x7fff3aba4cf4
