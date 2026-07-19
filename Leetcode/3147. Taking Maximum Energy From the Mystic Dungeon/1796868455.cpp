class Solution {
private:
    int solve(int i, int k, vector<int> &energy, vector<int> &dp) {
        if (dp[i] != -1) return dp[i];

        int sum = energy[i];
        if (i + k < energy.size())
            sum += dp[i + k];
        
        return dp[i] = sum;
    }
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size(), maxi = INT_MIN;
        vector<int> dp(n, -1);

        for (int i = n - 1; i >= 0; i--)
            maxi = max(maxi, solve(i, k, energy, dp));

        return maxi;
    }
};