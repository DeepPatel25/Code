class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i = row - 2; i >= 0; i--) {
            for(int j = 0; j < col; j++) {
                int minVal = matrix[i + 1][j];

                // Consider left and right elements
                if (j - 1 >= 0) 
                    minVal = min(minVal, matrix[i + 1][j - 1]);
                if (j + 1 < col) 
                    minVal = min(minVal, matrix[i + 1][j + 1]);

                // Update the current element with the minimum value
                matrix[i][j] += minVal;
            }
        }

        // Find the minimum value in the first row, which represents the minimum falling path sum
        return *min_element(matrix[0].begin(), matrix[0].end());
    }
};
