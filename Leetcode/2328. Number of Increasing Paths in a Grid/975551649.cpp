class Solution {
public:
    int mod = 1e9 + 7;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    bool isValid(int x, int y, vector<vector<int>>& grid) {
        if(x >= 0 && y >= 0 && x < grid.size() && y < grid[0].size()) {
            return true;
        }
        return false;
    }

    int dfs(int x, int y, vector<vector<int>>& grid, vector<vector<int>>& dp) {
        if(dp[x][y] != -1) return dp[x][y];

        int ans = 1;
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if(isValid(nx, ny, grid) && grid[x][y] < grid[nx][ny]) {
                ans = (ans % mod + dfs(nx, ny, grid, dp) % mod) % mod;
            }
        }

        return dp[x][y] = ans;
    }

    int countPaths(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        long long count = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                count = (count % mod + dfs(i, j, grid, dp) % mod) % mod;
            }
        }

        return (int)count % mod;
    }
};