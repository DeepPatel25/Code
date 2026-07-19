class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> mat(m, vector<int>(n, 0));
        vector<int> row(m, 0), col(n, 0);

        for (int i = 0; i < indices.size(); i++) {
            row[indices[i][0]]++;
            col[indices[i][1]]++;
        }

        for (int i = 0; i < m; i++) {
            if (row[i] > 0) {
                for(int j = 0; j < n; j++) {
                    mat[i][j] += row[i];
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (col[i] > 0) {
                for (int j = 0; j < m; j++) {
                    mat[j][i] += col[i];
                }
            }
        }

        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] % 2 == 1) count++;
            }
        }

        return count;
    }
};