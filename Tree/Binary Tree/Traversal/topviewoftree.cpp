// top view of binary tree
// Source: https://www.geeksforgeeks.org/print-nodes-top-view-binary-tree/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void topView(Node *root)
{
    if (root == NULL)
        return;                                    // if the root is null then return

    queue<pair<Node *, int>> q;                    // queue to store the node and its horizontal distance
    map<int, int> m;                               // map to store the horizontal distance and the node data
    int hd = 0;                                    // horizontal distance
    q.push(make_pair(root, hd));                   // push the root and its horizontal distance

    while (!q.empty())                             // while the queue is not empty
    {
        pair<Node *, int> temp = q.front();        // get the front element
        q.pop();                                   // pop the front element
        hd = temp.second;                          // get the horizontal distance
        Node *node = temp.first;                   // get the node

        if (m.count(hd) == 0)                      // if the horizontal distance is not present in the map
            m[hd] = node->data;                    // insert the horizontal distance and the node data

        if (node->left != NULL)                    // if the left child is not null
            q.push(make_pair(node->left, hd - 1)); // push the left child and its horizontal distance
        if (node->right != NULL)                   // if the right child is not null
            q.push(make_pair(node->right, hd + 1));// push the right child and its horizontal distance
    }

    for (auto i = m.begin(); i != m.end(); i++)    // traverse the map
        cout << i->second << " ";                  // print the node data
}

// Driver code
int main()
{
    Node *root = newNode(1);                        // create the tree
    root->left = newNode(2);                        // create the tree
    root->right = newNode(3);                       // create the tree
    root->left->right = newNode(4);                 // create the tree
    root->left->right->right = newNode(5);
    root->left->right->right->right = newNode(6);
    cout << "Top view of the tree is: ";            // print the top view of the tree
    topView(root);                                  // function call
    return 0;                          
}
