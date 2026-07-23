class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int m = batteries.size();
        sort(batteries.begin(), batteries.end());
        long long sum = accumulate(begin(batteries), end(batteries), 0LL);
        int i = m - 1;

        while (i >= 0 && sum / n < batteries[i]) {
            sum -= batteries[i];
            n--; i--;
        }

        return sum / n;
    }
};