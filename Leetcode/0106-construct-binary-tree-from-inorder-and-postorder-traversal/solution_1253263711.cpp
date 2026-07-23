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
    TreeNode* solve(int start, int end, int &postOrderIndex, vector<int>& inorder, vector<int>& postorder, unordered_map<int, int> &mp) {
        if(postOrderIndex < 0 || start > end) {
            return NULL;
        }

        TreeNode* root = new TreeNode(postorder[postOrderIndex]);
        postOrderIndex--;

        int position = mp[root->val];

        root->right = solve(position + 1, end, postOrderIndex, inorder, postorder, mp);
        root->left = solve(start, position - 1, postOrderIndex, inorder, postorder, mp);

        return root;
    }

public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> mp;
        int n = inorder.size();
        int postOrderIndex = n - 1;

        for(int i = 0; i < n; i++) mp[inorder[i]] = i;
        return solve(0, n - 1, postOrderIndex, inorder, postorder, mp);
    }
};