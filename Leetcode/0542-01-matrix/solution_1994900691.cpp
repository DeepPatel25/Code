class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        vector<vector<int>> dist(n, vector<int>(m, 0));
        queue<pair<pair<int, int>, int>> q;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 0) {
                    q.push({{i, j}, 0});
                    vis[i][j] = true;
                }
            }
        }

        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};

        while (!q.empty()) {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int steps = q.front().second;
            q.pop();

            dist[row][col] = steps;

            for (int i = 0; i < 4; i++) {
                int nRow = row + delRow[i];
                int nCol = col + delCol[i];

                if (nRow >= 0 and nCol >= 0 and nRow < n and nCol < m and !vis[nRow][nCol]) {
                    vis[nRow][nCol] = true;
                    q.push({{nRow, nCol}, steps + 1});
                }
            }
        }

        return dist;
    }
};