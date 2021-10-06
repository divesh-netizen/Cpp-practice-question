#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    struct Node* left;
    struct Node* right;
};

Node* createNode(int val){
    Node* newnode = new Node;
    newnode->val = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

void inorder(Node* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

Node* mirrorTree(Node* root){
    if(!root) return root;
    Node* t = root->left;
    root->left = root->right;
    root->right = t;

    if(root->left) 
        mirrorTree(root->left);
    if(root->right) 
        mirrorTree(root->right);

    return root;
}

int main()
{
 
    Node* tree = createNode(5);
    tree->left = createNode(3);
    tree->right = createNode(6);
    tree->left->left = createNode(2);
    tree->left->right = createNode(4);
    printf("Inorder of original tree: ");
    inorder(tree);
 
    // Function call
    mirrorTree(tree);
 
    printf("\nInorder of Miror tree: ");
    inorder(tree);
    return 0;
}