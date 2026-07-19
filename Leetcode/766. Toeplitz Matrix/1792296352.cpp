class Solution {
private:
    bool isToeplitz(vector<vector<int>> &matrix, int i, int j) {
        int row = matrix.size(), col = matrix[0].size();
        int currVal = matrix[i][j];

        while (i + 1 < row && j + 1 < col) {
            if (matrix[i + 1][j + 1] == currVal) {
                i++; j++;
            } else {
                return false;
            }
        }

        return true;
    }

public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();

        for (int i = row - 1; i >= 0; i--) {
            if (!isToeplitz(matrix, i, 0)) return false;
        }

        for (int i = 1; i < col; i++) {
            if(!isToeplitz(matrix, 0, i)) return false;
        }

        return true;
    }
};