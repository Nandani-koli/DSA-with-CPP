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
bool checkforBST(node* root, node* min, node* max)
{
    if(root == NULL)
    {
        return true;
    }
    if(min != NULL && root->data <= min->data)
    {
        return false;
    }
    if(max != NULL && root->data >= max->data)
    {
        return false;
    }
    bool leftvalid = checkforBST(root->left,min,root);
    bool rightvalid = checkforBST(root->right,root,max);

    return leftvalid and rightvalid;
}
int main()
{
    node* root = new node(2);
    root->right = new node(3);
    root->left = new node(1);    

    if(checkforBST(root,NULL,NULL))
    {
        cout<<"Valid BST"<<endl;
    }
    else{
        cout<<"Not Valid BST"<<endl;
    }
}