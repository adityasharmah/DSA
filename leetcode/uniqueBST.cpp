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

// leetcode 95. Unique Binary Search Trees II
// https://leetcode.com/problems/unique-binary-search-trees-ii/


class Solution {
public:
    
    vector<TreeNode*> generateTrees(int n) {
        if(n==0)
        {
            return {} ;
        }
        return generateTreesHelper(1, n);
    }
    
    vector<TreeNode*> generateTreesHelper(int start, int end)
    {
        vector<TreeNode*> trees;
        if (start > end) {
            trees.push_back(nullptr);
            return trees;
        }

        for (int i = start; i <= end; i++) {
        std::vector<TreeNode*> leftSubtrees = generateTreesHelper(start, i-1);
        std::vector<TreeNode*> rightSubtrees = generateTreesHelper(i+1, end);
        for (TreeNode* left : leftSubtrees) {
            for (TreeNode* right : rightSubtrees) {
                TreeNode* root = new TreeNode(i);
                root->left = left;
                root->right = right;
                trees.push_back(root);
            }
        }
    }
    return trees;
    }
};