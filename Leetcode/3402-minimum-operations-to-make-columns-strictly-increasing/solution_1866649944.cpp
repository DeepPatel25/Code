class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int count = 0;

        for (int col = 0; col < grid[0].size(); col++) {
            for (int row = 0; row < grid.size() - 1; row++) {
                if (grid[row][col] >= grid[row + 1][col]) {
                    int add = grid[row][col] - grid[row + 1][col] + 1; 
                    grid[row + 1][col] += add;
                    count += add;
                }
            }
        }

        return count;
    }
};