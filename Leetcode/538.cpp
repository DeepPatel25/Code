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
    vector<int> helper;
    int i;

    void inorder(TreeNode* root) {
        if (!root) return;

        inorder(root->left);
        helper.push_back(root->val);
        inorder(root->right);
    }

    void sum() {
        for (int i = helper.size() - 2; i >= 0; i--)
            helper[i] += helper[i + 1];
    }

    void placeInorder(TreeNode* root) {
        if (!root) return;

        placeInorder(root->left);
        root->val = helper[i++];
        placeInorder(root->right);
    }
    
    TreeNode* convertBST(TreeNode* root) {
        helper.clear();
        inorder(root);
        sum();
        i = 0;
        placeInorder(root);
        return root;
    }
};
