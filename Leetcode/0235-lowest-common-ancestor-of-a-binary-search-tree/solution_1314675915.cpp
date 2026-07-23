/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void find(TreeNode* root, int val, vector<TreeNode*>& temp) {
        if(!root) return;

        temp.push_back(root);

        if(root->val == val) {
            return;
        }

        if(val < root->val) {
            find(root->left, val, temp);
        } else {
            find(root->right, val, temp);
        }
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> temp1, temp2;

        find(root, p->val, temp1);
        find(root, q->val, temp2);

        TreeNode* ans;
        for(int i = 0; i < min(temp1.size(), temp2.size()); i++) {
            if(temp1[i] == temp2[i]) {
                ans = temp1[i];
            } else {
                break;
            }
        }

        return ans;
    }
};