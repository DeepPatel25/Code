class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int count = 0;
        int n = grid.size();

        for (int i = 0; i < n - 1; i++) {
            bool flag = false;

            for (int j = i + 1; j < n; j++) {
                if (grid[i][j] != 0) {
                    flag = true;
                    break;
                }
            }

            if (flag) {
                bool notPossible = true;
                for (int k = i + 1; k < n; k++) {
                    bool flag2 = false;
                    for (int l = i + 1; l < n; l++) {
                        if (grid[k][l]) {
                            flag2 = true;
                            break;
                        }
                    }

                    if (!flag2) {
                        for (int p = k; p >= i + 1; p--) {
                            notPossible = false;
                            swap(grid[p], grid[p - 1]);

                            count++;
                        }

                        break;
                    }
                }

                if (notPossible) {
                    return -1;
                }
            }
        }

        return count;
    }
};