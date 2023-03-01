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

// leetcode 104. Maximum Depth of Binary Tree
// Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/
 

class Solution {
public:
    // Construct with root node and return the height of the tree
    int maxDepth(TreeNode* root) {
        // Base case
        if(root == NULL)
        {
            return 0;
        }

        // Recursive case
        int leftDepth = maxDepth(root -> left);                    // Recursive call to left subtree
        int rightDepth = maxDepth(root -> right);                  // Recursive call to right subtree

        // Return the height of the tree
        return 1 + max(leftDepth, rightDepth);
    }
};