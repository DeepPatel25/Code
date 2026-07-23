class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        long sum = 0, maxi = 0, mini = 0;
        for (int i : differences) {
            sum += i;
            maxi = max(maxi, sum);
            mini = min(mini, sum);
        }

        return max(0L, upper - lower - maxi + mini + 1);
    }
};