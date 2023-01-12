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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;

        if(root == NULL)
        {
            return res;
        }
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            int s = q.size();
            vector<int> temp;

            for(int i = 0; i < s; i++)
            {
                TreeNode * root = q.front();
                temp.push_back(root -> val);
                q.pop();

                if(root -> left != NULL)
                {
                    q.push(root -> left);
                }

                if(root -> right != NULL)
                {
                    q.push(root -> right);
                }

                
            }
            res.push_back(temp);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};