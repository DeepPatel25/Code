class Solution {
private:
    vector<TreeNode*> solve(int start, int end) {
        if(start > end) {
            return {NULL};
        }

        if(start == end) {
            TreeNode* root = new TreeNode(start);
            return {root};
        }

        vector<TreeNode*> result;
        for(int i = start; i <= end; i++) {
            vector<TreeNode*> leftBSTs = solve(start, i - 1);
            vector<TreeNode*> rightBSTs = solve(i + 1, end);

            for(TreeNode* leftRoot : leftBSTs) {
                for(TreeNode* rightRoot : rightBSTs) {
                    TreeNode* root = new TreeNode(i, leftRoot, rightRoot);

                    result.push_back(root);
                }
            }
        }

        return result;
    }

public:
    vector<TreeNode*> generateTrees(int n) {
        return solve(1, n);
    }
};