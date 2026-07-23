class Solution {
public:
    long long countNoZeroPairs(long long n) {
        string s = to_string(n);
        int len = s.size();

        // memoization: pos, carry
        long long dp[20][2];
        memset(dp, -1, sizeof(dp));

        // DFS from least significant digit
        function<long long(int, int)> dfs = [&](int pos, int carry) -> long long {
            if (pos == len) return carry == 0 ? 1 : 0;
            if (dp[pos][carry] != -1) return dp[pos][carry];

            int digit = s[len - 1 - pos] - '0'; // least significant first
            long long res = 0;

            for (int a = 1; a <= 9; a++) {
                for (int b = 1; b <= 9; b++) {
                    int sum = a + b + carry;
                    if (sum % 10 == digit) {
                        res += dfs(pos + 1, sum / 10);
                    }
                }
            }

            return dp[pos][carry] = res;
        };

        return dfs(0, 0);
    }
};