class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();
        vector<int> ans(row, 0);

        for (int i = 0; i < row; i++) {
            int count = 0;

            for (int j = 0; j < col; j++)
                if (matrix[i][j] == 1)
                    count++;
            
            ans[i] = count;
        }

        return ans;
    }
};