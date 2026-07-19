class Solution {
public:
    bool isPalindrome(int i, int j, string &s) {
        while(i <= j) {
            if(s[i] != s[j]) return false;
            i++; j--;
        }

        return true;
    }

    int f(int idx, int n, string &s, vector<int> &dp) {
        if(idx == n) return 0;
        if(dp[idx] != -1) return dp[idx];

        int minCost = INT_MAX;

        for(int j = idx; j < n; j++) {
            if(isPalindrome(idx, j, s)) {
                minCost = min(minCost, 1 + f(j + 1, n, s, dp));
            }
        }

        return dp[idx] = minCost;
    }

    int minCut(string s) {
        int n = s.size();
        vector<int> dp(n, -1);
        return f(0, n, s, dp) - 1;
    }
};