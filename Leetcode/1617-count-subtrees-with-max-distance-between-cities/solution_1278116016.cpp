class Solution {
public:
    int solve(int subtree, vector<vector<int>> &dist, int n) {
        int countN = 0, countE = 0, mxd = 0;

        for(int i = 0; i < n; i++) {
            if(((subtree >> i) & 1) == 0) continue;
            
            countN++;
            for(int j = i + 1; j < n; j++) {
                if(((subtree >> j) & 1) == 0) continue;

                if(dist[i][j] == 1)
                    countE++;
                
                mxd = max(mxd, dist[i][j]);
            }
        }

        if(countN == countE + 1)
            return mxd;

        return -1;
    }

    vector<int> countSubgraphsForEachDiameter(int n, vector<vector<int>>& edges) {
        vector<int> v(n - 1, 0);
        vector<vector<int>> dist(15, vector<int>(15, INT_MAX));

        for(auto temp: edges) {
            dist[temp[0] - 1][temp[1] - 1] = 1;
            dist[temp[1] - 1][temp[0] - 1] = 1;
        }

        for(int k = 0; k < n; k++) {
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    if(dist[i][k] == INT_MAX || dist[j][k] == INT_MAX) continue;
                    dist[i][j] = dist[j][i] = min({dist[i][j], dist[j][i], dist[i][k] + dist[k][j]});
                }
            }
        }

        // Iterate over all the subsets
        for(int i = 0; i < (1 << n); i++) {
            int ans = solve(i, dist, n);
            if(ans > 0) {
                v[ans - 1]++;
            }
        }

        return v;
    }
};