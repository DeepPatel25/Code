class Solution {
public:
    int lip(vector<vector<int>>& matrix, int i, int j, vector<vector<int>>& memo) {
        if(i < 0 || j < 0 || i >= matrix.size() || j > matrix[0].size())
            return 0;

        if(memo[i][j] > 0) 
            return memo[i][j];

        int currMax = 1;
        // down
        if(i + 1 < matrix.size() && matrix[i + 1][j] > matrix[i][j]) {
            currMax = max(currMax, lip(matrix, i + 1, j, memo) + 1);
        }

        // right
        if(j + 1 < matrix[0].size() && matrix[i][j + 1] > matrix[i][j]) {
            currMax = max(currMax, lip(matrix, i, j + 1, memo) + 1);
        }

        // left
        if(j - 1 >= 0 && matrix[i][j - 1] > matrix[i][j]) {
            currMax = max(currMax, lip(matrix, i, j - 1, memo) + 1);
        }

        // up
        if(i - 1 >= 0 && matrix[i - 1][j] > matrix[i][j]) {
            currMax = max(currMax, lip(matrix, i - 1, j, memo) + 1);
        }

        return memo[i][j] = currMax;
    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {
       int m = matrix.size(), n = matrix[0].size();
       vector<vector<int>> memo(m, vector<int>(n, 0));
       int maxi = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                maxi = max(maxi, lip(matrix, i, j, memo));
            }
        }

       return maxi;
    }
};