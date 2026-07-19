class Solution {
public:
    int maxFreqSum(string s) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        vector<int> dp(26, 0);
        int maxiVow = 0, maxiConso = 0;

        for (char ch: s) {
            dp[ch - 'a']++;

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                maxiVow = max(maxiVow, dp[ch - 'a']);
            else
                maxiConso = max(maxiConso, dp[ch - 'a']);
        }

        return maxiVow + maxiConso;
    }
};