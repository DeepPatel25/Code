class Solution {
public:
    int row, col;
    vector<int> dx = {0, 1, 0, -1};
    vector<int> dy = {1, 0, -1, 0};

    void dfs(int i, int j, vector<vector<char>> &board, vector<vector<char>> &dp) {
        if(dp[i][j] == '1') return;

        dp[i][j] = '1';
        for(int k = 0; k < 4; k++) {
            int newX = i + dx[k];
            int newY = j + dy[k];

            if(newX >= 0 && newX < row && newY >= 0 && newY < col && board[newX][newY] == 'O') {
                dfs(newX, newY, board, dp);
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        row = board.size();
        col = board[0].size();

        vector<vector<char>> dp(row, vector<char>(col, '0'));
        
        for(int i = 0; i < col; i++) {
            // Check the top row
            if(board[0][i] == 'O') {
                dfs(0, i, board, dp);
            }
            // Check the bottom row
            if(board[row - 1][i] == 'O') {
                dfs(row - 1, i, board, dp);
            }
        }

        for(int i = 0; i < row; i++) {
            // Check the left column
            if(board[i][0] == 'O') {
                dfs(i, 0, board, dp);
            }
            // Check the right column
            if(board[i][col - 1] == 'O') {
                dfs(i, col - 1, board, dp);
            }
        }

        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(dp[i][j] == '0') {
                    board[i][j] = 'X';
                }
            }
        }
    }
};