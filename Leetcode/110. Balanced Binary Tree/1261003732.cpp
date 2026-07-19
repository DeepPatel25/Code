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
    bool ans;

    int helper(TreeNode* root) {
        if(!root) return 0;

        int leftHeight = helper(root->left);
        int rightHeight = helper(root->right);

        ans = abs(leftHeight - rightHeight) <= 1;
        return max(leftHeight, rightHeight) + 1;
    }

    bool isBalanced(TreeNode* root) {
        if(!root) return true;

        ans = false;
        int height = helper(root);
        return ans;
    }
};