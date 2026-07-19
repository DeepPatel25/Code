class Solution {
private:
    int count = 0;

    bool isValid(int row, int col, vector<vector<int>> &dp) {
        int tempRow = row, tempCol = col;

        // Left Diagonal Check
        tempRow = row, tempCol = col;
        while(tempRow >= 0 && tempCol >= 0) {
            if(dp[tempRow][tempCol]) {
                return false;
            }
            tempRow--; tempCol--;
        }

        // Upper Row Check
        tempRow = row, tempCol = col;
        while(tempRow >= 0) {
            if(dp[tempRow][tempCol]) {
                return false;
            }
            tempRow--;
        }

        tempRow = row, tempCol = col;
        while(tempRow >= 0 && tempCol < dp.size()) {
            if(dp[tempRow][tempCol]) {
                return false;
            }
            tempRow--; tempCol++;
        }

        return true;
    }

    void solve(int row, int n, vector<vector<int>> &dp) {
        if(row == n) {
            count++;
            return;
        }

        for(int col = 0; col < n; col++) {
            if(isValid(row, col, dp)) {
                dp[row][col] = 1;
                solve(row + 1, n, dp);
                dp[row][col] = 0;
            }
        }
    }

public:
    int totalNQueens(int n) {
        vector<vector<int>> dp(n, vector<int>(n, 0));
        solve(0, n, dp);

        return count;
    }
};