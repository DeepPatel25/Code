class Solution {
private:
    int maxi;

    void solve(int i, int j, vector<vector<int>> & grid, int k, int cost, int val) {
        if (i == grid.size() || j == grid[0].size() || cost > k)
            return;

        // cout << i << " " << j << " " << cost << " " << val << endl;
        
        if (i + 1 < grid.size())
            solve(i + 1, j, grid, k, cost + (grid[i + 1][j] > 0 ? 1 : 0), val + grid[i + 1][j]);

        if (j + 1 < grid[0].size())
            solve(i, j + 1, grid, k, cost + (grid[i][j + 1] > 0 ? 1 : 0), val + grid[i][j + 1]);

        if (i == grid.size() - 1 && j == grid[0].size() - 1)
            maxi = max(maxi, val);
    }
    
public:
    int maxPathScore(vector<vector<int>>& grid, int k) {
        if (grid.size() == 1 || grid[0].size() == 1) return 0;
        
        maxi = 0;
        solve(0, 0, grid, k, 0, 0);
        return maxi != 0 ? maxi : -1;
    }
};