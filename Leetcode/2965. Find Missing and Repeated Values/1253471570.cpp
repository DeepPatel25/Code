class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int sum = (n * n) * ((n * n) + 1) / 2;
        int gridSum = 0;
        unordered_map<int, int> mp;
        bool isRepeatedFound = false;
        int repeatedElement;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                gridSum += grid[i][j];

                if(!isRepeatedFound) {
                    mp[grid[i][j]]++;

                    if(mp[grid[i][j]] == 2) {
                        repeatedElement = grid[i][j];
                        isRepeatedFound= true;
                    }
                }
            }
        }

        return {repeatedElement, sum - gridSum + repeatedElement};
    }
};