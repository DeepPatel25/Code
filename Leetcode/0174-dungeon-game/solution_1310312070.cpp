class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int r = dungeon.size(), c = dungeon[0].size();
        vector<vector<int>> sol(r, vector<int>(c));

        sol[r - 1][c - 1] = dungeon[r - 1][c - 1] > 0 ? 1 : 1 - dungeon[r - 1][c - 1];
        for(int i = r - 1; i >= 0; i--) {
            for(int j = c - 1; j >= 0; j--) {
                if(i == r - 1 && j == c - 1) {
                    continue;
                } else if(i == r - 1) {
                    sol[i][j] = max(sol[i][j + 1] - dungeon[i][j], 1);
                } else if(j == c - 1) {
                    sol[i][j] = max(sol[i + 1][j] - dungeon[i][j], 1);
                } else {
                    sol[i][j] = max(min(sol[i + 1][j], sol[i][j + 1]) - dungeon[i][j], 1);
                }
            }
        }

        return sol[0][0];
    }
};