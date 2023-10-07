class Solution {
public:
    int dp[51][51][101];

    int solve(int idx, int lenList, int largest, int n, int m, int k) {
        if(idx == n) {
            if(lenList == k) {
                return 1;
            }
            return 0;
        }

        if(dp[idx][lenList][largest] != -1) {
            return dp[idx][lenList][largest];
        }

        int ans = 0;
        for(int i = 1; i <= m; i++) {
            if(i > largest) {
                ans += solve(idx + 1, lenList + 1, i, n, m, k);
            } else {
                ans += solve(idx + 1, lenList, largest, n, m, k);
            }
            
            ans = ans % 1000000007;
        }

        return dp[idx][lenList][largest] = ans;
    }

    int numOfArrays(int n, int m, int k) {
        memset(dp, -1, sizeof(dp));

        return solve(0, 0, 0, n, m, k);
    }
};