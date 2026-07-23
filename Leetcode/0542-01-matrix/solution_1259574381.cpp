class Solution {
public:
    void helper(int i, int j, vector<vector<int>> &dp, int &row, int &col) {
        if(i >= 0 && j >= 0 && i < row && j < col) {
            if(dp[i][j] != 0) {

            }

            helper(i + 1, j + 1, dp, row, col);
            
        }
    }

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        vector<vector<int>> dp(row, vector<int>(col, INT_MAX));
        pair<int, int> pi;

        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(mat[i][j] == 0) {
                    dp[i][j] = 0;
                    pi = {i, j};
                }
            }
        }
    }
};