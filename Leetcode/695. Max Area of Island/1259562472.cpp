class Solution {
public:
    void helper(int i, int j, vector<vector<int>> &grid, int &maxi, int count) {
        if(i < 0 || j < 0 || i == grid.size() || j == grid[0].size()) {
            return;
        }

        if(grid[i][j] == 1) {
            count++;
            maxi = max(maxi, count);

            helper(i, j, grid, maxi, count);
            helper(i, j, grid, maxi, count);
            
        }
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxi = 0;

        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[i].size(); j++) {
                if(grid[i][j] == 1) {
                    helper(i, j, grid, maxi, 0);
                }
            }
        }
    }
};