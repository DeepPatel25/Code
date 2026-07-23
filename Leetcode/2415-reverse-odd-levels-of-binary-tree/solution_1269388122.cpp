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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;

        while(!q.empty()) {
            vector<TreeNode*> vi;
            for(int i = q.size(); i > 0; i--) {
                auto node = q.front();
                q.pop();

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);

                vi.emplace_back(node);
            }
            
            if(level % 2 == 1) {
                int start = 0, end = vi.size() - 1;
                while(start < end) {
                    swap(vi[start]->val, vi[end]->val);
                    start++; end--;
                }
            }
            level++;
        }

        return root;
    }
};