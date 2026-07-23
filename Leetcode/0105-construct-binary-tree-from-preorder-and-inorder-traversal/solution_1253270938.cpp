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
    unordered_map<int, int> mp;
    int preOrderIndex;

    TreeNode* solve(int start, int end, int n, vector<int>& preorder, vector<int>& inorder) {
        if(preOrderIndex == n || start > end) {
            return NULL;
        }

        TreeNode* root = new TreeNode(preorder[preOrderIndex]);
        preOrderIndex++;

        int middle = mp[root->val];

        root->left = solve(start, middle - 1, n, preorder, inorder);
        root->right = solve(middle + 1, end, n, preorder, inorder);

        return root;
    }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        preOrderIndex = 0;

        for(int i = 0; i < n; i++) mp[inorder[i]] = i;
        return solve(0, n - 1, n, preorder, inorder);
    }
};