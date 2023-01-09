// buikd tree using recursion
#include <bits/stdc++.h>
using namespace std;

// class for node
class node{
    public:
        int data;                                // data of node
        node * left;                             // left child of node
        node * right;                            // right child of node

    node (int val)
    {
        this -> data = val;                      // data of node        
        this -> left = NULL;                     // left child of node as NULL
        this -> right = NULL;                    // right child of node as NULL
    }    
};

// build tree using recursion
node* buildTree(node* root){
    
    
    cout << " Enter the data: " << endl;
    int data;
    cin >> data;

    
    root = new node(data);                        // creating a new node
    
    // base case
    if(data == -1)
    {
        return NULL;                              // return NULL if data is -1
    }

    // recursive case
    cout << "Enter data for insertion in left "<< data << endl;            // inserting data in left child
    root -> left = buildTree(root -> left);                                // build tree for left child
    cout << "Enter dara for insertion in right " << data << endl;          // inserting data in right child
    root -> right = buildTree(root -> right);                              // build tree for right child
    return root;                                                           // return root
}

// level order traversal
void levelOrderTraversal(node* root)               
{
    queue<node*> q;                                                         // queue for storing nodes level by level
    q.push(root);                                                           // push root element
    q.push(NULL);                                                           // push NULL to indicate end of level

    
    while(!q.empty()){                                                      // traverse till queue is empty
        node* temp = q.front();                                             // get the front element
        q.pop();                                                            // pop the front element

        if(temp == NULL){                                                   // if temp is NULL
            cout << endl;                                                   // print new line
            if(!q.empty())                                                  // if queue is not empty
            {
                q.push(NULL);                                               // push NULL to indicate end of level
            }
        }
        // if temp is not NULL
        else
        {
            cout << temp -> data << " ";
            if(temp -> left)                                                 // if left child is not NULL
            {
                q.push(temp -> left);                                        // push left child in queue
            }

            if(temp -> right)                                                // if right child is not NULL
            {
                q.push(temp -> right);                                       // push right child in queue
            }

        }
    }
}

int main()
{
    node * root = NULL;               // root node

    // Creating a binary Tree
    root = buildTree(root);

    //level order 
    cout << "Printing the value for level order traversal" << endl;
    levelOrderTraversal(root);

    return 0;
}