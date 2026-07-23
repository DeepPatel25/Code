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
    map<int, int> mp;

    void dfs(TreeNode* root) {
        if(!root) return;

        mp[root->val]++;
        dfs(root->left);
        dfs(root->right);
    }

public:
    int findSecondMinimumValue(TreeNode* root) {
        dfs(root);

        int i = 1;
        for(auto it : mp) {
            if(i == 2) return it.first;
            i++;
        }

        return -1;
    }
};