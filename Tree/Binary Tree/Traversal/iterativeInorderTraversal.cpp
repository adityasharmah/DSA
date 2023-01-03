#include <bits/stdc++.h>
using namespace std;


// A binary tree node
struct node {
  int data;                                  
  struct node * left, * right;
};

// Iterative function for inorder tree traversal
vector < int > inOrderTrav(node * curr) {
  vector < int > inOrder;                  // vector to store the inOrder traversal
  stack < node * > s;                      // stack to store the nodes of the tree
  // traverse the tree
  while (true) {
    if (curr != NULL) {
      s.push(curr);                        // push the current node into the stack
      curr = curr -> left;
    } else {
      if (s.empty()) break;                   // if stack is empty, we are done
      curr = s.top();                         // else, pop the top item from stack, print it and finally set curr to its right child
      inOrder.push_back(curr -> data);        // push the data of the node into the vector
      s.pop();                                // pop the node from the stack
      curr = curr -> right;                   // set curr to its right child
    }
  }
  return inOrder;
}


// Utility function to create a new tree node
struct node * newNode(int data) {
  struct node * node = (struct node * ) malloc(sizeof(struct node));         // Allocate memory for new node
  node -> data = data;              // Assign data to this node
  node -> left = NULL;              // Initialize left and right children as NULL
  node -> right = NULL;             

  return (node);
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

  vector < int > inOrder;
  inOrder = inOrderTrav(root);

  cout << "The inOrder Traversal is : ";
  for (int i = 0; i < inOrder.size(); i++) {
    cout << inOrder[i] << " ";
  }
  return 0;
}