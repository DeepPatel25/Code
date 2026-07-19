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
    int solve(TreeNode* root, bool &ans) {
        if(!root) return 0;

        int leftHeight = solve(root->left, ans);
        int rightHeight = solve(root->left, ans);

        int absDiff = abs(leftHeight - rightHeight);
        if(absDiff <= 1) ans = true;
        else ans = false;

        return max(leftHeight, rightHeight) + 1;
    }

    bool isBalanced(TreeNode* root) {
        bool ans = false;
        int temp = solve(root, ans);
        return temp <= 2 ? true : false;
    }
};