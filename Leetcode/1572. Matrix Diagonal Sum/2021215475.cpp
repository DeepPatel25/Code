class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int row = mat.size(), col = mat[0].size();

        int i = 0, j = 0;
        while (i < row and j < col) {
            sum += mat[i][j];
            mat[i][j] = -mat[i][j];
            
            i++; j++;
        }

        i = 0, j = col - 1;
        while (i < row and col >= 0) {
            if (mat[i][j] >= 0)
                sum += mat[i][j];

            i++; j--;
        }

        return sum;
    }
};