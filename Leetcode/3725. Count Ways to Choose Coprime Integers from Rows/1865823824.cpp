class Solution {
public:
    const int mod = 1e9 + 7;
    
    int solve(int i, int gcd, vector<vector<int>>& mat, vector<vector<int>> & dp) {
        int n = mat.size();
        int m = mat[0].size();

        if (i == n) {
            return gcd == 1 ? 1 : 0;
        }

        if (dp[i][gcd + 1] != -1)
            return dp[i][gcd + 1];
        
        int ans = 0;

        for (int j = 0; j < m; j++) {
            if (i != 0)
                ans = (ans + solve(i + 1, __gcd(mat[i][j], gcd), mat, dp) % mod);
            else
                ans = (ans + solve(i + 1, mat[i][j], mat, dp)) % mod;
        }

        return ans;
    }

    int countCoprime(vector<vector<int>>& mat) {
        int maxi = 0;
        int n = mat.size();
        int m = mat[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                maxi = max(maxi, mat[i][j]);
            }
        }

        vector<vector<int>> dp(n, vector<int>(maxi + 2, -1));
        return solve(0, -1, mat, dp);
    }
};