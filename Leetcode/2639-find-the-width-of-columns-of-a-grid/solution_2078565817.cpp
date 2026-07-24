class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int rows = grid.size(), cols = grid[0].size();
        vector<int> ans;

        for (int col = 0; col < cols; col++) {
            int max = 0;
        
            for (int row = 0; row < rows; row++) {
                string s = to_string(grid[row][col]);
                max = ::max(max, (int)s.size());
            }

            ans.push_back(max);
        }

        return ans;
    }
};