#include <cstdlib>

class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        for(int i = 0; i < row; i++) {
            if(grid[i][0] == 0) {
                for(int j = 0; j < col; j++)
                    grid[i][j] = 1 ^ grid[i][j];
            }
        }

        for(int i = 0; i < col; i++) {
            if(grid[0][i] == 0) {
                for(int j = 0; j < row; j++)
                    grid[j][i] = 1 ^ grid[j][i];
            }
        }

        int sum = 0;
        for(int i = 0; i < row; i++) {
            string temp = "";
            
            for(int j = 0; j < col; j++) {
                temp += to_string(grid[i][j]);
            }

            int integerValue = 0;

            for (int i = 0; i < temp.length(); i++) {
                int bit = temp[i] - '0';
                integerValue <<= 1;
                integerValue |= bit;
            }

            sum += integerValue;
        }

        return sum;
    }
};