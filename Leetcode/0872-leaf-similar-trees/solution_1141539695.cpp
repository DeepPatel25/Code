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
    void traversal(TreeNode* root, vector<int> &vi) {
        if(!root) return;

        if(!root->left && !root->right) vi.push_back(root->val);
        traversal(root->left, vi);
        traversal(root->right, vi);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> vi;
        traversal(root1, vi);

        vector<int> vi2;
        traversal(root2, vi2);

        return vi == vi2;
    }
};