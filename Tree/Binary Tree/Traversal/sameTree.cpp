// Same Tree
// https://leetcode.com/problems/same-tree/

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
 // time complexity: O(n) where n is the number of nodes in the tree
 // TreeNode* p = new TreeNode(1);
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL &&  q == NULL) return true;                 // both are null hence same
        if(p == NULL ||  q == NULL) return false;                // both are not null hence not same
        if(p->val != q->val) return false;                       // both are not null and values are not same hence not same

        // both are not null and values are same hence check for left and right subtrees
        return isSameTree(p->right, q->right) && isSameTree(p->left, q->left) ;  
    }
};