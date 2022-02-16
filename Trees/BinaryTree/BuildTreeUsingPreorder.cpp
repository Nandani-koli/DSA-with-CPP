#include<iostream>
using namespace std;
struct node{
    int data;
    node*left;
    node* right;

    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};
int search(int inorder[], int st, int end, int curr)
{
    for(int i = st; i <= end; i++)
    {
        if(curr == inorder[i])
        {
            return i;
        }
    }
    return -1;
}

node* BuildTree(int preorder[], int inorder[],int st, int end)
{
    static int idx = 0; 
    if(st > end)        //base condition
    {
        return NULL;
    }
    
    int curr = preorder[idx];           //1. pick 1st element from preorder
    idx++;                              //2. increment preorder index

    node* newnode = new node(curr);         

    if(st == end)
    {
        return newnode;
    }

    int pos = search(inorder, st, end, curr);       //3. search for picked element 

    newnode->left = BuildTree(preorder, inorder, st, pos-1);            //4. call to build leftsubtree
    newnode->right = BuildTree(preorder, inorder, pos+1, end);          //5. call to build rightsubtree

    return newnode;
}

void Printinorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    Printinorder(root->left);
    cout<<root->data<<" ";
    Printinorder(root->right);
}

int main()
{
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};

    node* root = BuildTree(preorder, inorder, 0, 4);
    Printinorder(root);

    return 0;
}