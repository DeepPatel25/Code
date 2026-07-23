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
    vector<vector<int>> ans;

    void solve(TreeNode* root, vector<int>& temp, int targetSum) {
        if(!root) {
            return;
        }

        if(!root->left && !root->right) {
            if(targetSum - root->val == 0) {
                temp.push_back(root->val);
                ans.push_back(temp);
                temp.pop_back();
            }

            return;
        }

        temp.push_back(root->val);
        solve(root->left, temp, targetSum - root->val);
        solve(root->right, temp, targetSum - root->val);
        temp.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root) return ans;
        vector<int> temp;
        solve(root, temp, targetSum);   

        return ans;
    }
};