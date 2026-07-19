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
    vector<string> ans;
    
    void solve(TreeNode* root, string temp) {
        if(!root) return;

        temp = temp + to_string(root->val) + "->";
        
        if(!root->left && !root->right) {
            temp.erase(temp.length() - 2);
            ans.push_back(temp);
        }

        solve(root->left, temp);
        solve(root->right, temp);
    }

public:
    vector<string> binaryTreePaths(TreeNode* root) {
        solve(root, "");
        return ans;
    }
};