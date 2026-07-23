class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int maxi = 0;
        vector<int> dp(101, 0);

        for (int val: nums) {
            dp[val]++;
            maxi = max(maxi, dp[val]);
        }

        int count = 0;
        for (int i = 0; i < 101; i++)
            count += (dp[i] == maxi ? maxi : 0);
        
        return count;
    }
};