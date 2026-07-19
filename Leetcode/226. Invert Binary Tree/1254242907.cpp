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
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return root;

        vector<vector<int>> temp;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            vector<int> level;

            for(int i = q.size(); i > 0; i--) {
                TreeNode* node = q.front();
                q.pop();

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);

                level.push_back(node->val);
            }

            temp.push_back(level);
        }

        int level = 0;
        q.push(root);

        while(!q.empty()) {
            for(int i = q.size(), j = temp[level].size() - 1; i > 0, j >= 0; i--, j--) {
                TreeNode* node = q.front();
                q.pop();

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);

                node->val = temp[level][j];
            }
            level++;
        }

        return root;
    }
};