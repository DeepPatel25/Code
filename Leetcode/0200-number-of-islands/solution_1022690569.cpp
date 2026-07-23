class Solution {
public:
    void helper(int i, int j, int row, int col, vector<vector<char>> &grid) {
        vector<int> dx = {0, 1, 0, -1};
        vector<int> dy = {1, 0, -1, 0};

        for(int k = 0; k < 4; k++) {
            int newI = i + dx[k];
            int newJ = j + dy[k];

            if(newI >= 0 && newJ >= 0 && newI < row && newJ < col && grid[newI][newJ] == '1') {
                grid[newI][newJ] = '0';
                helper(newI, newJ, row, col, grid);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int row = grid.size();
        int col = grid[0].size();

        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(grid[i][j] == '1') {
                    count++;
                    grid[i][j] = '0';
                    helper(i, j, row, col, grid);
                }
            }
        }

        return count;
    }
};