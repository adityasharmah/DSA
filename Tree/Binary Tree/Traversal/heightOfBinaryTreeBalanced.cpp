// Source: https://leetcode.com/problems/balanced-binary-tree/w1
class Solution {

public:
    // Time complexity: O(n)
    // Space complexity: O(n)
    
    bool isBalanced(TreeNode* root) {                      // root is the root of the tree
        return dfsHeight (root) != -1;                     // if the height of the tree is -1 then it is not balanced
    }

    // function to calculate the height of the tree
    int dfsHeight (TreeNode *root) {

        if (root == NULL) return 0;                        // if the root is null then height is 0
        
        // calculate the height of the left and right subtree
        int leftHeight = dfsHeight (root -> left);        // height

        if (leftHeight == -1)                             // if the height of the left subtree is -1 then it is not balanced
            return -1;                                    // hence return -1
        
        // calculate the height of the left and right subtree
        int rightHeight = dfsHeight (root -> right);      // height

        if (rightHeight == -1)                            // if the height of the right subtree is -1 then it is not balanced
            return -1;                                    // hence return -1
        
    
        if (abs(leftHeight - rightHeight) > 1)            // if the difference between the height of the left and right subtree is greater than 1 then it is not balanced
            return -1;

        return max (leftHeight, rightHeight) + 1;         // return the height of the tree
    }
};