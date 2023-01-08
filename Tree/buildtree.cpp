
#include <bits/stdc++.h>
using namespace std;


class node{
    public:
        int data;
        node * left;
        node * right;

    node (int val)
    {
        this -> data = val;              
        this -> left = NULL;
        this -> right = NULL;
    }    
};

node* buildTree(node* root){
    
    cout << " Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);
    
    if(data == -1)
    {
        return NULL;
    }

    cout << "Enter data for insertion in left "<< data << endl;
    root -> left = buildTree(root -> left);
    cout << "Enter dara for insertion in right " << data << endl;
    root -> right = buildTree(root -> right);
    return root;
}

void levelOrderTraversal(node* root)               
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp -> data << " ";
            if(temp -> left)
            {
                q.push(temp -> left);
            }

            if(temp -> right)
            {
                q.push(temp -> right);
            }

        }
    }
}

int main()
{
    node * root = NULL;

    // Creating a binary Tree
    root = buildTree(root);

    //level order 
    cout << "Printing the value for level order traversal" << endl;
    levelOrderTraversal(root);

    return 0;
}