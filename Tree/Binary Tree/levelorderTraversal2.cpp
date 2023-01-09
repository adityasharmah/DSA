// Problem: Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).
// without using queue 
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
    vector<vector<int>> levelorder;                                       // vector to store level order traversal.
     vector<vector<int>> levelOrder(TreeNode* root) {                     // function to return level order traversal.
        // return empty vector if no tree exists.
         if(root==NULL) return levelorder;
        // recursinve function having arg, root of tree and depth of currunt node.
         Traversal(root,0);                                              // call recursive function.
         return levelorder;                                              // return level order traversal.
     }

     // recursive function to traverse tree level by level.
     void Traversal(TreeNode* curr,int depth){
         // return at end of depth.
         if(curr==NULL) return ;

         
         if(levelorder.size()==depth){
             // push empty vector if visiting the depth for first time.
             levelorder.push_back(vector<int>());
         }

        // push currunt node's value in vector of its depth.
         levelorder[depth].push_back(curr->val);                         // push currunt node's value in vector of its depth.
         Traversal(curr->left,depth+1);                                  // call recursive function for left subtree.
         Traversal(curr->right,depth+1);                                 // call recursive function for right subtree.
         
         // return at end of depth.
    vector<vector<int>> levelOrder(TreeNode* root) {
        // return empty vector if no tree exists.
         if(root==NULL) return levelorder;
        // recursinve function having arg, root of tree and depth of currunt node.
         Traversal(root,0);
         return levelorder;
     }
     void Traversal(TreeNode* curr,int depth){
         // return at end of depth.
         if(curr==NULL) return ;
         if(levelorder.size()==depth){
             // push empty vector if visiting the depth for first time.
             levelorder.push_back(vector<int>());
         }
        // push currunt node's value in vector of its depth.
         levelorder[depth].push_back(curr->val);
         Traversal(curr->left,depth+1);
         Traversal(curr->right,depth+1);
     } 
};