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
    int widthOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});

        while(!q.empty()) {
            int size = q.size(), smallest = INT_MAX, largest = 0;

            for(int i = 0; i < size; i++) {
                auto temp = q.front();
                q.pop();

                if (temp.first->left) q.push({temp.first->left, 2 * temp.second});
                if (temp.first->right) q.push({temp.first->right, 2 * temp.second + 1});

                smallest = min(smallest, temp.second);
                largest = max(largest, temp.second);
            }

            cout << largest << " " << smallest << endl;
            maxi = max(maxi, largest - smallest + 1);
        }

        return maxi;
    }
};