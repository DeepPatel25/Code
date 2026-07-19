class Solution {
public:
    int getMoneyAmount(int n) {
        unordered_map<long long, int> dp;

        function<int(int, int)> cost = [&](int low, int high) -> int {
            if (high <= low)
                return 0;

            long long key = ((long long)low << 32) | high;  // combine low & high into one unique key
            if (dp.count(key))
                return dp[key];

            int output = INT_MAX;
            for (int i = low; i < high; ++i) {
                int curr = i + max(cost(low, i - 1), cost(i + 1, high));
                output = min(output, curr);
            }

            dp[key] = output;
            return output;
        };

        return cost(1, n);
    }
};