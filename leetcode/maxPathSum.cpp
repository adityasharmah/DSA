// leetcode: https://leetcode.com/problems/binary-tree-maximum-path-sum/
// Link: https://leetcode.com/problems/binary-tree-maximum-path-sum/

// // leetcode 124. Binary Tree Maximum Path Sum
class Solution {
public:
    // constructor
    int max_sum=INT_MIN;               // maximum
     int max_gain(TreeNode* root)
    {
        // base case
        if(!root)return 0;
        int l=max(max_gain(root->left),0);    // if left is negative, then we don't consider it
        int r=max(max_gain(root->right),0);   // if right is negative, then we don't consider it
        int new_price=root->val+l+r;          // new price
        max_sum=max(max_sum,new_price);       // update the maximum
        return root->val+max(l,r);
    }
    // main function
    int maxPathSum(TreeNode* root) {
        max_gain(root);
        return max_sum;
    }
};