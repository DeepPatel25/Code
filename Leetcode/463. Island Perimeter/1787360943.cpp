class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0, row = grid.size(), col = grid[0].size();
        vector<pair<int, int>> directions = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        queue<pair<int, int>> q;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 1) {
                    q.push({i, j});
                    break;
                }
            }

            if (q.size() > 0) break;
        }

        while (!q.empty()) {
            auto p = q.front();
            q.pop();
            grid[p.first][p.second] = 2;

            for(int i = 0; i < 4; i++) {
                int newX = p.first + directions[i].first, newY = p.second + directions[i].second;

                if(newX < 0 || newY < 0 || newX >= row || newY >= col || grid[newX][newY] == 0) {
                    ans++;
                } else if (grid[newX][newY] == 1) {
                    grid[newX][newY] = 2;
                    q.push({newX, newY});
                }
            }
        }

        return ans;
    }
};