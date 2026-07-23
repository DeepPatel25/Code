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
    TreeNode* recoverFromPreorder(string traversal) {
        stack<TreeNode*> st;
        TreeNode* root = nullptr;
        int i = 0, n = traversal.size();

        while (i < n) {
            int depth = 0, value = 0;
            while (i < n && traversal[i] == '-') {
                depth++;
                i++;
            }

            while (i < n && isdigit(traversal[i])) {
                value = value * 10 + (traversal[i++] - '0');
            }

            TreeNode* node = new TreeNode(value);
            while (st.size() > depth) st.pop();

            if (!st.empty()) {
                if (!st.top()->left) st.top()->left = node;
                else st.top()->right = node;
            } else {
                root = node;
            }

            st.push(node);
        }

        return root;
    }
};