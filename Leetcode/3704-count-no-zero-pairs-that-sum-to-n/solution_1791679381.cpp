class Solution {
public:
    long long countNoZeroPairs(long long n) {
        string s = to_string(n);
        int len = s.size();

        // memoization: pos, carry
        long long dp[20][2] = {};
        memset(dp, -1, sizeof(dp));

        function<long long(int, int, bool)> dfs = [&](int pos, int carry, bool tight) -> long long {
            if (pos == len) return carry == 0 ? 1 : 0;

            int limit = tight ? s[pos] - '0' : 9;
            long long res = 0;

            for (int a = 1; a <= 9; a++) {
                for (int b = 1; b <= 9; b++) {
                    int sum = a + b + carry;
                    if (sum % 10 <= limit) {
                        bool next_tight = tight && (sum % 10 == limit);
                        res += dfs(pos + 1, sum / 10, next_tight);
                    }
                }
            }
            return res;
        };

        return dfs(0, 0, true);
    }
};