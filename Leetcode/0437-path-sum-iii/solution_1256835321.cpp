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
typedef TreeNode*  l;
    int p(l r, long long s){
        if(not r)return 0;
        int res=0;
        s-=r->val;
        if(s==0) {
            res+=1;
        }
        return res += p(r->right, s)+p(r->left, s);
    }
    int pathSum(TreeNode* root, int s) {
        if(not root) return 0;
        return pathSum(root->left,s)+p(root, s)+pathSum(root->right, s);
    }
};