class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int land = 0;         // total land cells
        int neighbors = 0;    // count of adjacent land pairs

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    land++;

                    // Check only right and down to avoid double-counting neighbors
                    if (i + 1 < rows && grid[i + 1][j] == 1) neighbors++;
                    if (j + 1 < cols && grid[i][j + 1] == 1) neighbors++;
                }
            }
        }

        // Each land contributes 4 sides, each shared side removes 2
        return 4 * land - 2 * neighbors;
    }
};
