class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        vector<vector<int>> mat(m, vector<int>(n, 0));

        for (int i = 0; i < indices.size(); i++) {
            int row = indices[i][0];

            for (int j = 0; j < n; j++)
                mat[row][j]++;
            
            int col = indices[i][1];

            for (int j = 0; j < m; j++)
                mat[j][col]++;
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