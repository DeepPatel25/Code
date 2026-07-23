class Solution {
public:
    int mod = 1e9 + 7;

    int solve(int n, vector<int>& dp) {
        if(n <= 0) {
            return 0;
        }

        if(dp[n] != -1) return dp[n];

        cout << n << endl;
        int count = 0;
        if(n - 3 >= 0) count = (count + 5) + solve(n - 3, dp) % mod;
        else if(n - 2 >= 0) count = (count + 2) + solve(n - 2, dp) % mod;
        else if(n - 1 >= 0) count = (count + 1) + solve(n - 1, dp) % mod;

        return dp[n] = count % mod;
    }

    int numTilings(int n) {
        vector<int> dp(n + 1, -1);
        int temp = solve(n, dp);

        return dp[n];
    }
};