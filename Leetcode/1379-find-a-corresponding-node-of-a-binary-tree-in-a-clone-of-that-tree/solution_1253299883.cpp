/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
private:
    TreeNode* dfs(TreeNode* root, int val) {
        if(!root) return NULL;
        if(root->val == val) return root;

        TreeNode* left = dfs(root->left, val);
        if(left) return left;

        TreeNode* right = dfs(root->right, val);
        if(right) return right;

        return NULL;
    }

public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        int val = target->val;
        return dfs(cloned, val);
    }
};