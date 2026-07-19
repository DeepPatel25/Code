class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        if(o[0][0] == 1)return 0;
        int n = o.size();
        int m = o[0].size();
        vector<int> prev(m);
        prev[0] = 1;
        for(int j = 1; j < m; j++){
            if(o[0][j] == 0)prev[j] = prev[j-1];
        }
        for(int i = 1; i < n; i++){
            if(o[i][0] == 1) prev[0] = 0;
            for(int j = 1; j < m; j++){
                if(o[i][j] == 1) prev[j] = 0;
                else prev[j] += prev[j-1];
            }
        }
        return prev[m-1];
    }
};