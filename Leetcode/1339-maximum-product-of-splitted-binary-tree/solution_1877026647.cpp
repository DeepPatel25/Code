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
    const int mod = 1e9 + 7;

    void helper(TreeNode* root, int &totalSum) {
        if (!root)
            return;
        
        totalSum = (totalSum + root->val) % mod;
        helper(root->left, totalSum);
        helper(root->right, totalSum);
    }

private:
    int solve(TreeNode* root, int &maxi, int totalSum) {
        if (!root)
            return 0;
        
        int sum = (root->val + solve(root->left, maxi, totalSum)
            + solve(root->right, maxi, totalSum)) % mod;
        
        maxi = max(maxi, (totalSum - sum) * sum);
        return sum;
    }

public:
    int maxProduct(TreeNode* root) {
        int totalSum = 0, maxi = INT_MIN;
        helper(root, totalSum);
        solve(root, maxi, totalSum);

        return maxi;
    }
};