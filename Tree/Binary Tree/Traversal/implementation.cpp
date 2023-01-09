// 
#include<bits/stdc++.h>
using namespace std;


class Node{
    public :
    int data; 
    Node * left;
    Node * right;

    // constructor
    Node(int val){
        data = val;
        // left and right are pointers are intialized to NULL 
        left = NULL;
        right = NULL;
    }

};

int main(){

    Node * root = new Node(1);              // root node
    root -> left = new Node(2);             // left child of root
    root -> right = new Node(3);            // right child of root

    root -> left -> left = new Node(4);     // left child of left child of root
    root -> right -> left = new Node(5);    // left child of right child of root
    return 0;
}
