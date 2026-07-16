class Solution {
  public:
    vector<vector<int>> dp;
    
    int solve(int i, int& n, int sum) {
        if (i == n) {
            return sum == 0;
        }
        
        if (dp[i][sum] != -1)
            return dp[i][sum];
            
        int ans = 0;
        int start = (i == 0) ? 1: 0;
        
        for (int digit = start; digit <= 9 and digit <= sum; digit++) {
            ans += solve(i + 1, n, sum - digit);
        }
        
        return dp[i][sum] = ans;
    }
    
    int countWays(int n, int sum) {
        dp.assign(n + 1, vector<int>(sum + 1, -1));
        
        int ans = solve(0, n, sum);
        return ans == 0 ? -1: ans;
    }
};
