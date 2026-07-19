class Solution {
public:
    vector<int> dp;

    int solve(int n) {
        if(n == 0 || n == 1) return 1;
        if(n == 2) return 2;

        if(dp[n] != -1) return dp[n];

        int ans = 0;
        for(int i = 1; i <= n; i++) {
            ans = ans + solve(i - 1) * solve(n - i);
        }

        return dp[n] = ans;
    }

    int numTrees(int n) {
        dp.resize(20, 0);
        return solve(n);
    }
};