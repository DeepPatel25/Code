class Solution {
public:
    int solve(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp) {
        int ans = 0;
        
        int temp = j + 1;
        while(temp < grid[0].size()) {
            if(grid[i][j] <= grid[i][temp]) {
                ans = max(ans, grid[i][temp] - grid[i][j] + dp[i][temp]);
            }
            temp++;
        }
        
        temp = i + 1;
        while(temp < grid.size()) {
            if(grid[i][j] <= grid[temp][j]) {
                ans = max(ans, grid[temp][j] - grid[i][j] + dp[temp][j]);
            }
            temp++;
        }
        
        return dp[i][j] = ans;
    }
        
    int maxScore(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        vector<vector<int>> dp(row, vector<int>(col, 0));
        int maxi = INT_MIN;
        
        for(int i = row - 1; i > -1; --i) {
            for(int j = col - 1; j > -1; --j) {
                maxi = max(maxi, solve(i, j, grid, dp));
            }
        }
        
        return maxi != 0 ? maxi : -1;
    }
};