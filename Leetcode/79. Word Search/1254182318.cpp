class Solution {
public:
    bool solve(int i, int j, int k, string word, vector<vector<char>> &board) {
        if(i >= 0 && j >= 0 && i < board.size() && j < board[0].size()) {
            if(k == word.size()) return true;
            if(word[k] == board[i][j]) {
                board[i][j] = '.';

                k++;
                bool ans = solve(i + 1, j, k, word, board) ||
                    solve(i, j + 1, k, word, board) ||
                    solve(i - 1, j, k, word, board) ||
                    solve(i, j - 1, k, word, board);

                board[i][j] = word[k - 1];
                return ans;
            }
        }
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[0].size(); j++) {
                if(board[i][j] == word[0]) {
                    if(solve(i, j, 0, word, board)) {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};