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
bool isBalanced(node* root, int *height)         //time complexity = O(n)
{   
    if(root == NULL)
    {
        return true;
    }
    int lh = 0, rh = 0;
    if(isBalanced(root->left, &lh) == false)
    {
        return false;
    }
    if(isBalanced(root->right, &rh) == false)
    {
        return false;
    }

    *height = max(lh,rh)+1;
    if(abs(lh-rh) <= 1)
    {
        return true;
    }
    else{
        return false;
    }

}

int height(node* root)              //time complexity = O(n)
{
    if(root == NULL)
    {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh)+1;
}

bool isBalanced(node* root)         //time complexity = O(n)  
{
    if(root == NULL)
    {
        return true;
    }
    if(isBalanced(root->left) == false)
    {
        return false;
    }
    if(isBalanced(root->right) == false)
    {
        return false;
    }
    int lh = height(root->left);
    int rh = height(root->right);

    if(abs(lh - rh) <= 1)
    {
        return true;
    }
    else{
        return false;
    }

}

int main()
{
    node* root = new node(3);
    root->left = new node(2);
    root->left->left = new node(1);
    root->right = new node(4);


    node* root2 = new node(3);
    root2->left = new node(2);
    root2->left->left = new node(1);


    if(isBalanced(root))                //so total time complexity of function is O(n^2)
    {
        cout<<"Balanced Tree"<<endl;
    }
    else{
        cout<<"Not Balanced Tree"<<endl;
    }
    //OUTPUT-> Balanced Tree

    int height = 0;
     if(isBalanced(root,&height))
    {
        cout<<"Balanced Tree"<<endl;
    }
    else{
        cout<<"Not Balanced Tree"<<endl;
    }
    //OUTPUT->Not Balanced Tree
}