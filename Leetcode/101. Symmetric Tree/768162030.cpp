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
    bool isSymmetric(TreeNode* root) {
        return checker(root->left, root->right);
    }
    
    bool checker(TreeNode* l, TreeNode* r){
        if(l==NULL && r==NULL) return true;
        
        if(!l || !r) return false;
        
        if(l->val==r->val){
            return checker(l->left, r->right) && checker(l->right, r->left);
        }
        return false;
    }
};