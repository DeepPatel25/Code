class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans = prices.size();
        long long a = 0;

        for (int i = 0; i < prices.size() - 1; i++) {
            if (prices[i] == prices[i + 1] + 1) {
                a++;
                ans += a;
            } else {
                a = 0;
            }
        }

        return ans;
    }
};