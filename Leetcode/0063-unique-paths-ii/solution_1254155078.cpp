class Solution {
public:
    void solve(int i, int j, int &count, vector<vector<int>>& obstacleGrid) {
        if(i == 0 && j == 0) {
            if(obstacleGrid[i][j] == 0) {
                count++;
            }
            return;
        }

        if(i < 0 || j < 0) return;
        if(obstacleGrid[i][j] == 1) return;

        solve(i - 1, j, count, obstacleGrid);
        solve(i, j - 1, count, obstacleGrid);
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int count = 0;
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        solve(m - 1, n - 1, count, obstacleGrid);
        return count;
    }
};