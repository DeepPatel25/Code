class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return 0;
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        int maxi = 0;
        vector<vector<int>> dp(rows, vector<int>(cols, 0));

        // Initialize the first row and first column of dp matrix
        for (int i = 0; i < rows; ++i) {
            dp[i][0] = matrix[i][0] - '0';
            maxi = max(maxi, dp[i][0]);
        }
        for (int j = 0; j < cols; ++j) {
            dp[0][j] = matrix[0][j] - '0';
            maxi = max(maxi, dp[0][j]);
        }
        
        // Fill the dp matrix
        for (int i = 1; i < rows; ++i) {
            for (int j = 1; j < cols; ++j) {
                if (matrix[i][j] == '1') {
                    dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
                    maxi = max(maxi, dp[i][j]);
                }
            }
        }

        return maxi * maxi; // Return area of largest square
    }
};
