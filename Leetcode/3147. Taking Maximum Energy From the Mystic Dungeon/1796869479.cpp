class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size(), maxi = INT_MIN;
        vector<int> dp(n, -1);

        for (int i = n - 1; i >= 0; i--) {
            int sum = energy[i];

            if (i + k < n)
                sum += dp[i + k];
            
            dp[i] = sum;
            maxi = max(maxi, dp[i]);
        }

        return maxi;
    }
};