#include <iostream>
using namespace std;
struct node{
    int data;
    node* left ;
    node * right;

    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[], int st, int end, int curr)
{
    for(int i = st; i<= end; i++)
    {
        if(curr == inorder[i])
        {
            return i;
        }
    }
    return -1;
}

node * BuildTree(int postorder[], int inorder[], int st, int end)
{
    if(st > end)
    {
        return NULL;
    }
    static int idx = end;
    int curr = postorder[idx];
    idx--;

    node* newnode = new node(curr);

    int pos = search(inorder, st, end, curr);
    newnode->right = BuildTree(postorder, inorder, pos+1, end);
    newnode->left = BuildTree(postorder, inorder, st, pos-1);

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
     int postorder[] = {4,2,5,3,1};
     int inorder[] = {4,2,1,5,3};

    node* root = BuildTree(postorder, inorder, 0, 4);
    Printinorder(root);                 //4 2 1 5 3
 }