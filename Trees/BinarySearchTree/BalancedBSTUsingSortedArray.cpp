#include <iostream>
using namespace std;

struct node{
    int data;
    node* right;
    node* left;

    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

node* sortedArrayToBST(int arr[], int st,int end)
{
    if(st > end)
    {
        return NULL;
    }
    int mid = (st + end)/2;
    node* root = new node(arr[mid]);

    root->left = sortedArrayToBST(arr,st,mid-1);
    root->right = sortedArrayToBST(arr,mid+1,end);

    return root;
}

void preorderPrint(node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorderPrint(root->left);
    preorderPrint(root->right);

}

int main()
{
    int arr[] = {10,20,30,40,50};
    node* root = sortedArrayToBST(arr,0,4);

    preorderPrint(root);            //30 10 20 40 50 
    cout<<endl;
}