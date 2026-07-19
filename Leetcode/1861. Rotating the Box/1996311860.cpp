class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int row = boxGrid.size();
        int col = boxGrid[0].size();

        for (int i = 0; i < row; i++) {
            for (int j = col - 1; j >= 0; j--) {
                // Check Right element
                int k = j;
                while (k + 1 < col and boxGrid[i][k] == '#' and boxGrid[i][k + 1] == '.') {
                    swap(boxGrid[i][k], boxGrid[i][k + 1]);
                    k++;
                }
            }
        }

        vector<vector<char>> ans(col, vector<char>(row, '.'));
        for (int j = 0; j < col; j++) {
            for (int i = row - 1; i >= 0; i--) {
                ans[j][row - i - 1] = boxGrid[i][j];
            }
        }

        return ans;
    }
};