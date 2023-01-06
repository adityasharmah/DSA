// Post Order Traversal of a Binary Tree using 2 Stacks
#include <bits/stdc++.h>
using namespace std;

// Structure of a tree node
struct node {
  int data;
  struct node * left, * right;
};

// Function to perform post order traversal of the tree
void postOrderTrav(node * curr, vector < int > & postOrder) {
  if (curr == NULL)                                    // If the current node is NULL,
    return;

  postOrderTrav(curr -> left, postOrder);              // Traverse left subtree
  postOrderTrav(curr -> right, postOrder);             // Traverse right subtree
  postOrder.push_back(curr -> data);                   // Print the root
}

// Utility function to create a new tree node
struct node * newNode(int data) {
  struct node * node = (struct node * ) malloc(sizeof(struct node));    // Allocate memory
  node -> data = data;                                            // Assign data to this node
  node -> left = NULL;                                            // Initialize left and right children as NULL
  node -> right = NULL;                                           // Initialize left and right children as NULL

  return (node);                                                  // Return new node
}

int main() {

  struct node * root = newNode(1);
  root -> left = newNode(2);
  root -> right = newNode(3);
  root -> left -> left = newNode(4);
  root -> left -> right = newNode(5);
  root -> left -> right -> left = newNode(8);
  root -> right -> left = newNode(6);
  root -> right -> right = newNode(7);
  root -> right -> right -> left = newNode(9);
  root -> right -> right -> right = newNode(10);

  vector < int > postOrder;
  postOrderTrav(root, postOrder);                   // Perform postOrder traversal

  // Print the postOrder traversal
  cout << "The postOrder Traversal is : ";
  for (int i = 0; i < postOrder.size(); i++) {
    cout << postOrder[i] << " ";                     // Print the postOrder traversal
  }
  return 0;
}