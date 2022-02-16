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
void LevelOrder(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node * newroot = q.front();
        q.pop();
        if(newroot != NULL)
        {
            cout<<newroot->data<<" ";
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
        }
    }
    
}

int main()
{
    node* root = new node(2);
    root->left = new node(9);
    root->right = new node(8);

    root->left->left = new node(7);
    root->left->right = new node(3);

    root->right->left = new node(1);
    root->right->right = new node(4);

    LevelOrder(root);           //2 9 8 7 3 1 4
}