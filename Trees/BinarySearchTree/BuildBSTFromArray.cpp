#include <iostream>
using namespace std;
struct node{
    int data;
    node*left;
    node* right;
     node(int value){
         data = value;
          left = NULL;
          right = NULL;
     }
};

node* BuildBST(node* root,int value)
{
    if(root == NULL)
    {
        return new node(value);
    }
    if(value < root->data)
    {
       root->left = BuildBST(root->left,value);
    }
    else{
        //value > root->data
       root->right = BuildBST(root->right,value);
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

   root = BuildBST(root,5);
    BuildBST(root,1);    
    BuildBST(root,3);
    BuildBST(root,4);
    BuildBST(root,2);
    BuildBST(root,7);

    inorder(root);          //1 2 3 4 5 7 
    cout<<endl;
}