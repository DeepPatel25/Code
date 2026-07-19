class Solution {
public:
    int lnc(vector<vector<int>>& board, int i, int j) {

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

        
    }
};