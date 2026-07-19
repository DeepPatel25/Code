class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int row = grid.size(), col = grid[0].size();
        int newX = x + k - 1;
        int newY = y + k - 1;

        while(x < newX) {
            for (int tempY = y; tempY <= newY; tempY++)
                swap(grid[x][tempY], grid[newX][tempY]);
            
            x++; newX--;
        }

        return grid;
    }
};