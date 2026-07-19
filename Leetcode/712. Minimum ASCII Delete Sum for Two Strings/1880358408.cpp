class Solution {
private:
    /*
        solve(i, j) returns the minimum ASCII delete sum required
        to make substrings s1[i:] and s2[j:] equal.
    */
    int solve(int i, int j, string s1, string s2, vector<vector<int>>& dp) {

        // If both strings are fully processed, no cost needed
        if (i == s1.size() && j == s2.size())
            return 0;

        // If s1 is exhausted, delete all remaining characters of s2
        if (i == s1.size()) {
            int ans = 0;
            while (j < s2.size())
                ans += s2[j++];  // ASCII value of character
            return ans;
        }

        // If s2 is exhausted, delete all remaining characters of s1
        if (j == s2.size()) {
            int ans = 0;
            while (i < s1.size())
                ans += s1[i++];  // ASCII value of character
            return ans;
        }

        // Return memoized result if already computed
        if (dp[i][j] != -1)
            return dp[i][j];

        // If characters match, no deletion needed for this step
        if (s1[i] == s2[j])
            return dp[i][j] = solve(i + 1, j + 1, s1, s2, dp);

        /*
            If characters don't match:
            - Option 1: Delete s1[i] and move i forward
            - Option 2: Delete s2[j] and move j forward
            Choose the option with minimum ASCII delete sum
        */
        return dp[i][j] = min(
            solve(i + 1, j, s1, s2, dp) + s1[i],
            solve(i, j + 1, s1, s2, dp) + s2[j]
        );
    }

public:
    /*
        Main function to compute minimum ASCII delete sum
        to make two strings equal
    */
    int minimumDeleteSum(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        // dp[i][j] stores the result for substrings s1[i:], s2[j:]
        vector<vector<int>> dp(n, vector<int>(m, -1));

        // Start recursion from index 0 of both strings
        return solve(0, 0, s1, s2, dp);
    }
};
