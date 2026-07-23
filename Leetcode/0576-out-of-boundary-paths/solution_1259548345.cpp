class Solution {
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memo = vector<vector<vector<long>>>(m + 1, vector<vector<long>>(n + 1, vector<long>(maxMove + 1, -1)));
        for (int i = 0; i <= m; ++i) {
            for (int j = 0; j <= n; ++j) {
                fill(memo[i][j].begin(), memo[i][j].end(), -1);
            }
        }
        return static_cast<int>(helper(m, n, maxMove, startRow, startColumn));
    }

private:
    vector<vector<vector<long>>> memo;
    const int mod = 1000000007;

    long helper(int m, int n, int maxMove, int row, int col) {
        if (maxMove < 0) {
            return 0;
        }

        // Boundary Condition
        if (row == m || col == n || row < 0 || col < 0) {
            return 1;
        }

        if (memo[row][col][maxMove] != -1) {
            return memo[row][col][maxMove];
        }

        long total = 0;
        long left = helper(m, n, maxMove - 1, row, col - 1);
        long right = helper(m, n, maxMove - 1, row, col + 1);
        long up = helper(m, n, maxMove - 1, row - 1, col);
        long down = helper(m, n, maxMove - 1, row + 1, col);

        total = ((left + right + up + down) % mod);
        memo[row][col][maxMove] = total;
        return total;
    }
};