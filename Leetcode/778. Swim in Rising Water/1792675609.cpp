class Solution {
private:
    void check(int mid, vector<vector<int>> &grid, int i, int j, vector<vector<bool>> &visited) {
        int n = grid.size();

        if (!visited[i][j] && grid[i][j] <= mid) {
            visited[i][j] = true;

            if (i + 1 < n) check(mid, grid, i + 1, j, visited);
            if (j + 1 < n) check(mid, grid, i, j + 1, visited);
            if (i - 1 >= 0) check(mid, grid, i - 1, j , visited);
            if (j - 1 >= 0) check(mid, grid, i, j - 1, visited);
        }
    }

public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size(), ans = 0;

        int start = 0, end = n * n;
        while (start < end) {
            int mid = start + (end - start) / 2;
            vector<vector<bool>> visited(n, vector<bool>(n, false));
            check(mid, grid, 0, 0, visited);

            if (visited[n - 1][n - 1]) {
                end = mid;
            } else {
                start = mid + 1;
            }
        }

        return start;
    }
};