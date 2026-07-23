class Solution {
public:
    int minimumOperationsToWriteY(vector<vector<int>>& grid) {
        int n = grid.size();
        int yCount = (3 * (n / 2)) + 1;
        int otherCount = (n * n) - yCount;
        vector<int> yMp(3, 0);
        vector<int> otherMp(3, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((i == j && i < n / 2) || (i == n - j - 1 && i < n / 2) ||
                    (i >= n / 2 && j == n / 2)) {
                        yMp[grid[i][j]]++;
                    } else {
                        otherMp[grid[i][j]]++;
                    }
            }
        }

        int innerOpCount = yCount - yMp[grid[0][0]];
        int outerOpCount = otherCount - *max_element(otherMp.begin(), otherMp.end());
        return innerOpCount + outerOpCount;
    }
};