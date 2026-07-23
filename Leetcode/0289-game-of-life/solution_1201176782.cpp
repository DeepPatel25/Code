class Solution {
public:
    int lnc(vector<vector<int>>& board, int i, int j) {
        int row = board.size();
        int col = board[0].size();
        int count = 0;

        // Horizontal
        if(j - 1 >= 0) {
            if(board[i][j - 1] == 1 || board[i][j - 1] == 3) {
                count++;
            }
        }

        if(j + 1 < col) {
            if(board[i][j + 1] == 1 || board[i][j + 1] == 3) {
                count++;
            }
        }

        // Vertical
        if(i - 1 >= 0) {
            if(board[i - 1][j] == 1 || board[i - 1][j] == 3) {
                count++;
            }
        }

        if(i + 1 < row) {
            if(board[i + 1][j] == 1 || board[i + 1][j] == 3) {
                count++;
            }
        }

        // Diagonal
        if(i - 1 >= 0 && j - 1 >= 0) {
            if(board[i - 1][j - 1] == 1 || board[i - 1][j - 1] == 3) {
                count++;
            }
        }

        if(i - 1 >= 0 && j + 1 >= col) {
            if(board[i - 1][j + 1] == 1 || board[i - 1][j + 1] == 3) {
                count++;
            }
        }

        if(i + 1 >= row && j - 1 >= 0) {
            if(board[i + 1][j - 1] == 1 || board[i + 1][j - 1] == 3) {
                count++;
            }
        }

        
    }

    void gameOfLife(vector<vector<int>>& board) {
        int row = board.size();
        int col = board[0].size();

        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                int count = lnc(board, i, j);

                if(board[i][j] == 0) {
                    if(count == 3) {
                        board[i][j] = 2;
                    }
                } else if(board[i][j] == 1) {
                    if(count < 2 || count > 3) {
                        board[i][j] = 3;
                    }
                }
            }
        }

        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(board[i][j] == 2) board[i][j] = 1;
                else if(board[i][j] == 3) board[i][j] = 0;
            }
        }
    }
};