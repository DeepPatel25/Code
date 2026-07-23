class Solution {
public:
    int findMaxForm(vector<string>& strs, int M, int N) {
        vector<vector<int>> dp(M + 1, vector<int>(N + 1, 0));

        for (auto& s : strs) {
            int mCnt = 0, nCnt = 0;
            for (char c: s) {
                if (c == '0') mCnt++;
                else nCnt++;
            }

            for (int m = M; m >= mCnt; m--) {
                for (int n = N; n >= nCnt; n--) {
                    dp[m][n] = max(dp[m][n], 1 + dp[m - mCnt][n - nCnt]);
                }
            }
        }

        return dp[M][N];
    }
};