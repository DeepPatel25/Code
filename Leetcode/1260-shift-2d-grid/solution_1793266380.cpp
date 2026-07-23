class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size(), col = grid[0].size();
        vector<vector<int>> vi(row, vector<int>(col, 0));

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                int newVal = ((i * col + j) + k) % (row * col);
                int newI = newVal / col;
                int newJ = newVal % col;
                vi[newI][newJ] = grid[i][j];
            }
        }

        return vi;
    }
};