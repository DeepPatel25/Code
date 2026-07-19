class Solution {
private:
    bool check(int i, int j, vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        set<int> s;
        vector<int> row(3, 0);
        vector<int> col(3, 0);

        for (int k = i; k < i + 3; k++) {
            for (int l = j; l < j + 3; l++) {
                if (grid[k][l] >= 10 || s.find(grid[k][l]) != s.end() || grid[k][l] < 1) {
                    return false;
                }

                s.insert(grid[k][l]);
                row[k - i] += grid[k][l];
                col[l - j] += grid[k][l];
            }
        }

        int sum = row[0];
        for (int k = 0; k < 3; k++) {
            if (row[k] != sum || col[k] != sum) {
                return false;
            }
        }

        int diagonal = 0;
        for (int k = 0; k < 3; k++) {
            diagonal += grid[k + i][k + j];
        }

        if (sum != diagonal) {
            return false;
        }

        diagonal = 0;
        for (int k = 0; k < 3; k++) {
            diagonal += grid[i + 2 - k][k + j];
        }

        if (sum != diagonal) {
            return false;
        }

        return true;
    }

public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int count = 0;

        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < m - 2; j++) {
                if (check(i, j, grid)) {
                    count++;
                    cout << i << " " << j << endl;
                }
            }
        }

        return count;
    }
};