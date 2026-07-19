class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxi = 0, idx = -1;
        int row = mat.size(), col = mat[0].size();

        for (int i = 0; i < row; i++) {
            int count = 0;
            for (int j = 0; j < col; j++) {
                if (mat[i][j] == 1)
                    count++;
            }

            if (count > maxi) {
                maxi = count;
                idx = i;
            }
        }

        return {idx, maxi};
    }
};