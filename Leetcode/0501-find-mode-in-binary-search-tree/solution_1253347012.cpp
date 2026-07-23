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
    int maxi = -1;
    unordered_map<int, int> mp;

    void inorder(TreeNode* root) {
        if(!root) return;

        mp[root->val]++;
        maxi = max(maxi, mp[root->val]);

        inorder(root->left);
        inorder(root->right);    
    }

public:
    vector<int> findMode(TreeNode* root) {
        inorder(root);

        vector<int> ans;
        for(auto it: mp) {
            if(it.second == maxi) ans.push_back(it.first);
        }

        return ans;
    }
};