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
private:
    void solve(TreeNode* root) {
        if(root->left && root->right) {
            solve(root->left);
            solve(root->right);

            int leftVal = root->left->val, rightVal = root->right->val;

            if(leftVal <= 1 && rightVal <= 1) {
                if(root->val == 2) root->val = (leftVal | rightVal) ? 1 : 0;
                else root->val = (leftVal & rightVal) ? 1 : 0;
            }
        }
    }

public:
    bool evaluateTree(TreeNode* root) {
        solve(root);
        return root->val;
    }
};