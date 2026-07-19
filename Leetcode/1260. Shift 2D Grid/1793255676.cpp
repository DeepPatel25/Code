class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size(), col = grid[0].size();
        vector<int> temp(row * col, 0);
        int totalSize = row * col;
        int a = 0;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                temp[a++] = grid[i][j];
            }
        }

        a = (totalSize - k) % totalSize;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                grid[i][j] = temp[a];
                a = (a + 1) % totalSize;
            }
        }

        return grid;
    }
};