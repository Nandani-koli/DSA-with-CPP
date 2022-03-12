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
// to find successor of node to be delete in inorder sequence 
node* inordersuccessor(node* root)
{
    node* curr = root;
    while(curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

//delete in BST
node* deleteInBST(node* root, int key)
{
    if(root == NULL)
    {
        return root;
    }
    if(key < root->data)
    {
        root->left = deleteInBST(root->left, key);
    }
    else if(key > root->data)
    {
        root->right = deleteInBST(root->right, key);
    }
    else{
        if(root->left == NULL)
        {
            node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL)
        {
            node* temp = root->left;
            free(root);
            return temp;
        }
            node* temp = inordersuccessor(root->right);
            root->data = temp->data;
            root->right = deleteInBST(root->right,temp->data);
    }
    return root;
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
        BuildBST(root, 6);
        BuildBST(root, 1);
        BuildBST(root, 3);
        BuildBST(root, 5);
        BuildBST(root, 8);
        BuildBST(root, 7);
        BuildBST(root, 9);

        inorder(root);      //1 2 3 4 5 6 7 8 9 
        cout<<endl;

        root = deleteInBST(root,8);

        inorder(root);      //1 2 3 4 5 6 7 9
        cout<<endl;

        return 0;
}