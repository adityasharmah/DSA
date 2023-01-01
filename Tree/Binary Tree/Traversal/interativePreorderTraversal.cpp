// Iterative Preorder Traversal

#include <bits/stdc++.h>
using namespace std;

// A binary tree node has data, pointer to left child and a pointer to right child
struct node {
  int data;
  struct node * left, * right;
};


// Iterative function for preorder tree traversal
vector < int > preOrderTrav(node * curr) {
  vector < int > preOrder;                                // vector to store the preOrder traversal
  if (curr == NULL)                                       // if the tree is empty
    return preOrder;

  stack < node * > s;                                     // stack to store the nodes
  s.push(curr);                                           // push the root node

  while (!s.empty()) {                                    // while the stack is not empty
    node * topNode = s.top();
    preOrder.push_back(topNode -> data);
    s.pop();
    if (topNode -> right != NULL)
      s.push(topNode -> right);
    if (topNode -> left != NULL)
      s.push(topNode -> left);
  }
  return preOrder;

}

// Helper function that allocates a new node with the given data and NULL left and right pointers.
struct node * newNode(int data) {
  struct node * node = (struct node * ) malloc(sizeof(struct node));
  node -> data = data;
  node -> left = NULL;
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

  vector < int > preOrder;
  preOrder = preOrderTrav(root);

  cout << "The preOrder Traversal is : ";
  for (int i = 0; i < preOrder.size(); i++) {
    cout << preOrder[i] << " ";
  }
  return 0;
}