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
    void solver(TreeNode* root, vector<int> &temp, int &mini) {
        if(!root) return;

        solver(root->left, temp, mini);
        temp.emplace_back(root->val);
        if(temp.size() >= 2) {
            int n = temp.size();
            mini = min(mini, abs(temp[n-1] - temp[n-2]));
        }
        solver(root->right, temp, mini);
    }

    int getMinimumDifference(TreeNode* root) {
        vector<int> temp;
        int mini = INT_MAX;
        solver(root, temp, mini);
        return mini;
    }
};