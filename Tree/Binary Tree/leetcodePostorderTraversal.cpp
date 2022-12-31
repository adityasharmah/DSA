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
class Solution {
public:
    vector<int> arr;
    vector<int> postorderTraversal(TreeNode* root) {

        if(root == NULL){
            return arr;
        }
        postorderTraversal(root -> left);
        postorderTraversal(root -> right);
        arr.push_back(root -> val);
        return arr;
    }
};