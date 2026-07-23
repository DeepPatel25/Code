class Solution {
public:
    int countCoprime(vector<vector<int>>& mat) {
        const int mod = 1e9 + 7;
        int maxi = 0, n = mat.size(), m = mat[0].size();

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                maxi = max(maxi, mat[i][j]);
        
        unordered_map<int, int> prev;
        
        for (int j = 0; j < m; j++)
            prev[mat[0][j]] += 1;

        for (int i = 1; i < n; i++) {
            unordered_map<int, int> curr;

            for (auto j: prev) {
                for (int k: mat[i]) {
                    int gcd = __gcd(j.first, k);
                    curr[gcd] = (curr[gcd] + j.second) % mod;
                }
            }

            prev = curr;
        }

        return prev[1];
    }
};