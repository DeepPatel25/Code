class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size();
        
        if (r * c != m * n) 
            return mat;

        vector<vector<int>> ans(r, vector<int>(c));
        int k = 0, l = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[k][l] = mat[i][j];
                l++;

                if (l == c) {
                    l = 0;
                    k++;
                }
            }
        }

        return ans;
    }
};