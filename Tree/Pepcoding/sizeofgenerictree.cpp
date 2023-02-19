// Size of Generic Tree
// 1. You are given a partially written GenericTree class.
// 2. You are required to find and print the size of the tree. THe size is defined as total number of nodes in the tree (1 for root node, 1 for each of it's children and so on).
// 3. Input and Output is managed for you.

#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    vector<Node*> children;

    Node(int data) {
        this->data = data;
    }
};

void display(Node* node) {
    string str = to_string(node->data) + " -> ";
    for (Node* child : node->children) {
        str += to_string(child->data) + ", ";
    }
    str += ".";
    cout << str << endl;

    for (Node* child : node->children) {
        display(child);
    }
}

Node* construct(vector<int>& dlist) {
    Node* root = NULL;

    stack<Node*> st;
    for (int i = 0; i < dlist.size(); i++) {
        if (dlist[i] == -1) {
            st.pop();
        } else {
            Node* t = new Node(dlist[i]);
            if (st.size() > 0) {
                st.top()->children.push_back(t);
            } else {
                root = t;
            }
            st.push(t);
        }
    }

    return root;
}

int size(Node* node) {
    // write your code here
    int count = 0;
    for(Node* child : node->children)
    {
        count += size(child);
    }
    return count + 1;
}

int main() {
    int n;
    cin >> n;
    vector<int> dlist(n);
    for (int i = 0; i < n; i++) {
        cin >> dlist[i];
    }

     
    Node* root = construct(dlist);
    int sz = size(root);                       // size of the tree
    cout << sz << endl;
    // display(root);
}

