/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// leetcode 144. Binary Tree Preorder Traversal
// Link: https://leetcode.com/problems/binary-tree-preorder-traversal/

// Iterative solution for preorder traversal 
class Solution {
public:
    vector<int> arr;
    vector<int> preorderTraversal(TreeNode* root) {
        // root, left, right
        if(root == NULL)
             return arr;
        
        // Create a stack
        stack<TreeNode*> st;
        st.push(root);                                     // Push the root node into the stack
        while(!st.empty())
        {
            root = st.top();
            st.pop();
            arr.push_back(root -> val);
            if(root -> right != NULL)
            {
                st.push(root -> right);
            }
            if(root -> left != NULL)
            {
                st.push(root -> left);
            }
        }
        
        return arr;
    }
};