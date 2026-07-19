class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if (r * c != mat.size() * mat[0].size()) 
            return mat;
            
        vector<vector<int>> ans(r, vector<int>(c, 0));
        int k = 0, l = 0;

        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                ans[k][l] = mat[i][j];
                cout << k << " " << l << endl;
                l = (l + 1) % c;

                if (l == 0)
                    k++;
            }
        }

        return ans;
    }
};