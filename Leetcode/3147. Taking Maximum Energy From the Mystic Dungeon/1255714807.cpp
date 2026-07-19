class Solution {
public:
    int solve(int i, int k, vector<int>& energy, vector<int>& dp) {
        if(dp[i] != -1) {
            return dp[i];
        }
        
        int sum = energy[i];
        if(i + k < energy.size()) {
            sum += dp[i + k];
        }
        
        return dp[i] = sum;
    }
    
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
        vector<int> dp(n, -1);
        int maxi = INT_MIN;
        
        for(int i = n - 1; i >= 0; i--) {
            maxi = max(maxi, solve(i, k, energy, dp));
        }
        
        return maxi;
    }
};