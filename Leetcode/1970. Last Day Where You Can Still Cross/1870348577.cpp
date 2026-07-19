class Solution {
private:
    bool check(int day, int row, int col, vector<vector<int>> &cells) {
        vector<vector<int>> grid(row, vector<int>(col, 0));
        for (int i = 0; i < day; i++) {
            grid[cells[i][0] - 1][cells[i][1] - 1] = 1;
        }

        vector<vector<int>> vis(row, vector<int>(col, 0));
        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        queue<pair<int, int>> q;
        for (int i = 0; i < col; i++) {
            if (grid[0][i] == 0)
                q.push({0, i});
        }

        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;

            if (r == row - 1)
                return true;
            
            q.pop();

            for (int k = 0; k < 4; k++) {
                int nrow = r + dx[k];
                int ncol = c + dy[k];
                if (nrow >= 0 and nrow < row and ncol >= 0 and ncol < col && !vis[nrow][ncol] and grid[nrow][ncol] == 0) {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }

        return false;
    }

public:
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        int low = 0, high = cells.size();
        int ans = 0;

        while (low <= high) {
            int mid = (low + high) / 2;
            if(check(mid, row, col, cells)) {
                ans = max(ans, mid);
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};