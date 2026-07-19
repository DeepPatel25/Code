class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Traverse the tree
        while (root) {
            // If both p and q are less than root, then LCA lies in left
            if (p->val < root->val && q->val < root->val) {
                root = root->left;
            }
            // If both p and q are greater than root, then LCA lies in right
            else if (p->val > root->val && q->val > root->val) {
                root = root->right;
            }
            // If one of p or q is equal to root, or p and q are on different sides of root, then root is LCA
            else {
                return root;
            }
        }
        return nullptr; // if the tree is empty or root not found
    }
};
