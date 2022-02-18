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

node* Search(node* root, int key)
{
    if(root == NULL)
    {
        return NULL;
    }
    if( root->data == key)
    {
        return root;
    }
    
    if(key < root->data)
    {
        return Search(root->left,key);
    }
       // key > root->data
        return Search(root->right,key);
}

node* BuildBST(node* root, int value)
{
    if( root == NULL)
    {
        return new node(value);
    }
    if(value < root->data)
    {
        root->left = BuildBST(root->left, value);
    }
    if(value > root->data)
    {
         root->right = BuildBST(root->right, value);
    }

    return root;
}


void inorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
        node* root = NULL;
        root = BuildBST(root,4);
        BuildBST(root, 2);
        BuildBST(root, 5);
        BuildBST(root, 1);
        BuildBST(root, 3);
        BuildBST(root, 6);

    inorder(root);          //1 2 3 4 5 6
    cout<<endl;

    int key = 5;
    if(Search(root,key) == NULL)
    {
        cout<<key<<" doesn't exists"<<endl;
    }
    else{
        cout<<key<<" exist"<<endl;
    }
}