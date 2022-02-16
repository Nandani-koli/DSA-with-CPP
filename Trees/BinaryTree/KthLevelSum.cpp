#include <iostream>
#include <queue>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;

    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int SumAtKLevel(node* root, int k)
{
    queue <node*> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;

    while(!q.empty())
    {
        node* newroot = q.front();
        q.pop();
        
        if(newroot != NULL)
        {
            if(level == k)
            {
                sum += newroot->data;
            }

            if(newroot->left)
            {
                q.push(newroot->left);
            }
            if(newroot->right)
            {
                q.push(newroot->right);
            }
        }
        else if(!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }

    return sum;
}

int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    cout<<SumAtKLevel(root, 1)<<endl;           //Level 1 = 2 & 3 so 2+3 = 5
    
}