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

// leetcode 94. Binary Tree Inorder Traversal
// https://leetcode.com/problems/binary-tree-inorder-traversal/

class Solution {
public:
    vector<int> arr;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == NULL)
        {
            return arr;
        }

        inorderTraversal(root -> left);
        arr.push_back(root -> val);
        inorderTraversal(root -> right);

        return arr;
    }
};