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
    TreeNode* createBST(int start, int end, vector<int> &nums) {
        if(start > end) return NULL;

        int mid = start + (end - start) / 2;
        return new TreeNode(nums[mid], createBST(start, mid - 1, nums),
            createBST(mid + 1, end, nums));
    }

public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return createBST(0, nums.size() - 1, nums);
    }
};