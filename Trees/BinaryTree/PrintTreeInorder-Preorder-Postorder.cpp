#include <iostream>
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

void preorder(node* root)
{
    //root->left->right
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node* root)
{
   if(root == NULL)
    {
        return;
    }
    //leftsubtree->root->rightsubtree
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node* root)
{
    //leftsubtree->rightsubtree->root
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

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
/*
    1
   / \
  2   3
 / \  / \
4   5 6  7

*/
    preorder(root);                 //1 2 4 5 3 6 7
    cout<<endl;
    inorder(root);                  //4 2 5 1 6 3 7 
    cout<<endl;
    postorder(root);                //4 5 2 6 7 3 1 
    cout<<endl;
}