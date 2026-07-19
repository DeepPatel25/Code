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
    void solver(TreeNode* root, int &mini) {
        if(root->left) {
            int temp = abs(root->val - root->left->val);
            mini = min(mini, temp);
            solver(root->left, mini);
        }
        if(root->right) {
            int temp = abs(root->val - root->right->val);
            mini = min(mini, temp);
            solver(root->right, mini);
        }
    }

    int getMinimumDifference(TreeNode* root) {
        int mini = INT_MAX;
        solver(root, mini);
        return mini;
    }
};