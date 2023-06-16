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
    int maxLevelSum(TreeNode* root) {
        int maxi = INT_MIN;
        queue<TreeNode*> q;
        q.push(root);
        int i = 1;
        int ans = -1;

        while(!q.empty()) {
            int size = q.size();
            int sum = 0;

            while(size--) {
                auto it = q.front();
                q.pop();

                if(it->left) q.push(it->left);
                if(it->right) q.push(it->right);

                sum += it->val;
            }

            if(sum > maxi) {
                maxi = sum;
                ans = i;
            }

            i++;
        }

        return ans;
    }
};