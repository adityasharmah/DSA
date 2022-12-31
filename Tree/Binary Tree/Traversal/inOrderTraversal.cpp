// Inorder Traversal of a Binary Tree
// visit the left subtree first
// then visit the root node
// then visit the right subtree

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

Node * createNode(int data){
    Node * newNode = new Node();
    newNode -> data = data;
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode;
}

void printInOrder(struct Node * node)
{
    if(node == NULL)
        return;
    
    printInOrder(node -> left);
    cout << node -> data << " ";
    printInOrder(node -> right);
}

int main(){

    struct Node * root = createNode(1);
    root -> left = createNode(2);
    root -> right = createNode(3);
    root -> left -> left = createNode(4);
    root -> left -> right = createNode(5);
    root -> right -> left = createNode(6);
    root -> right -> right = createNode(7);
    root -> left -> left -> left = createNode(8);
    root -> left -> right -> right = createNode(9);

    cout << "In Order Traversal of the Binary Tree is: ";
    printInOrder(root);

    return 0;
}