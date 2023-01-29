// Size, Sum, Maximum And Height Of A Binary Tree
// https://www.pepcoding.com/resources/online-java-foundation/binary-tree/size-sum-max-height-official/ojquestion
// 1. You are given a partially written BinaryTree class.
// 2. You are required to complete the body of size, sum, max and height function. The functions are expected to
//     2.1. size - return the number of nodes in BinaryTree
//     2.2. sum - return the sum of nodes in BinaryTree
//     2.3. max - return the highest node in BinaryTree
//     2.4. height - return the height of tree in terms of edges
// 3. Input and Output is managed for you.



#include<iostream>
#include<climits>
#include<string.h>
#include<vector>

using namespace std;

// class for node
class Node
{
public:
  int data;                                                   // data of the node
  Node* left = nullptr;                                       // left child of the node
  Node* right = nullptr;                                      // right child of the node
  Node(int data)                                              // constructor
  {
    this->data = data;                                        // return the data
  }
};

// class for pair
class Pair {
public:

  Node* node = nullptr;                                       // node of the pair
  int state = 0;                                              // state of the pair

  
  Pair(Node* node, int state) {                               
    this->node = node;                                        // return the node
    this->state = state;                                      // return the state
  }
};

// class for binary tree
int idx = 0;
Node* constructTree(vector<int>& arr)                          // construct the tree
{

  if (idx == arr.size() || arr[idx] == -1)                     // if the index is equal to the size of the array or the element is -1
  {
    idx++;                                                     // increment the index
    return nullptr;                                            // return null
  }
  Node* node = new Node(arr[idx++]);                           // create a new node
  node->left = constructTree(arr);                             // construct the left subtree
  node->right = constructTree(arr);                            // construct the right subtree
  return node;
}

// display the tree
void display(Node* node)
{
  if (node == nullptr)
    return;
  string str = "";
  str += node->left != nullptr ? to_string(node->left->data) : ".";
  str += " <- " + to_string(node->data) + " -> ";
  str += node->right != nullptr ? to_string(node->right->data) : ".";
  cout << str << endl;

  display(node->left);
  display(node->right);
}


int size(Node* node)
{
  return node == nullptr ? 0 : size(node->left) + size(node->right) + 1;
}

int height(Node* node)
{
  return node == nullptr ? -1 : max(height(node->left), height(node->right)) + 1;
}

int maximum(Node* node)
{
  return node == nullptr ? -1e8 : max(max(maximum(node->left), maximum(node->right)), node->data);
}


int sum(Node* root) {

  return root == nullptr ? 0 : sum(root->left) + sum(root->right) + root->data;
}

int main()
{

  int n;
  cin >> n;

  vector<int> arr(n, 0);
  for (int i = 0; i < n; i++) {
    string temp;
    cin >> temp;

    if (temp == "n")
    {
      arr[i] = -1;
    }
    else
    {
      arr[i] = stoi(temp);
    }
  }

  Node* root = constructTree(arr);

  int sz = size(root);
  int sm = sum(root);
  int max = maximum(root);
  int ht = height(root);
  cout << sz << endl;
  cout << sm << endl;
  cout << max << endl;
  cout << ht << endl;
}