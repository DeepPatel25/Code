class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> ans;
        bool ltr = true;
        bool take = true;

        for (int i = 0; i < grid.size(); i++) {
            if (ltr) {
                for (int j = 0; j < grid[i].size(); j++) {
                    if (take) {
                        ans.push_back(grid[i][j]);
                    }

                    take = !take;
                }
            } else {
                for (int j = grid[i].size() - 1; j >= 0; j--) {
                    if (take) {
                        ans.push_back(grid[i][j]);
                    }

                    take = !take;
                }
            }

            ltr = !ltr;
        }

        return ans;
    }
};