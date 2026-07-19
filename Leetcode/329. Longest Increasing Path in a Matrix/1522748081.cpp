class Solution {
public:
    int lip(vector<vector<int>>& matrix, int i, int j, vector<vector<int>>& memo, int m, int n) {
        if(i < 0 || j < 0 || i >= m || j > n)
            return 0;

        if(memo[i][j] > 0) 
            return memo[i][j];

        int currMax = 1;
        // down
        if(i + 1 < m && matrix[i + 1][j] > matrix[i][j]) {
            currMax = max(currMax, lip(matrix, i + 1, j, memo, m, n) + 1);
        }

        // right
        if(j + 1 < n && matrix[i][j + 1] > matrix[i][j]) {
            currMax = max(currMax, lip(matrix, i, j + 1, memo, m, n) + 1);
        }

        // left
        if(j - 1 >= 0 && matrix[i][j - 1] > matrix[i][j]) {
            currMax = max(currMax, lip(matrix, i, j - 1, memo, m, n) + 1);
        }

        // up
        if(i - 1 >= 0 && matrix[i - 1][j] > matrix[i][j]) {
            currMax = max(currMax, lip(matrix, i - 1, j, memo, m, n) + 1);
        }

        return memo[i][j] = currMax;
    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {
       int m = matrix.size(), n = matrix[0].size();
       vector<vector<int>> memo(m, vector<int>(n, 0));
       int maxi = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                maxi = max(maxi, lip(matrix, i, j, memo, m, n));
            }
        }

       return maxi;
    }
};