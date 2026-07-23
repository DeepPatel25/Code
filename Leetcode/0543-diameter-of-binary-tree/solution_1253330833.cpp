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
    int solve(TreeNode* root, int &maxi) {
        if(!root) return 0;

        int leftMaxHeight = solve(root->left, maxi);
        int rightMaxHeight = solve(root->right, maxi);

        maxi = max(leftMaxHeight + rightMaxHeight, maxi);

        return 1 + max(rightMaxHeight, leftMaxHeight);
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        int ans = solve(root, maxi);

        return maxi;
    }
};