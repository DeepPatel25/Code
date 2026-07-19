class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int ans = 0, n = grid.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j]) ans += 4;
                ans += i - 1 < 0 ? 2 * grid[i][j] : abs(grid[i][j] - grid[i - 1][j]);
                ans += i + 1 == n ? 2 * grid[i][j] : abs(grid[i][j] - grid[i + 1][j]);
                ans += j - 1 < 0 ? 2 * grid[i][j] : abs(grid[i][j] - grid[i][j - 1]);
                ans += j + 1 == n ? 2 * grid[i][j] : abs(grid[i][j] - grid[i][j + 1]);
            }
        }

        return ans / 2;
    }
};