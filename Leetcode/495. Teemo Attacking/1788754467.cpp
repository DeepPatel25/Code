class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans = 0, size = timeSeries.size();

        for (int i = 0; i < size; i++) {
            if (i + 1 < size) {
                if (timeSeries[i] + duration >= timeSeries[i + 1]) {
                    ans += timeSeries[i + 1] - timeSeries[i];
                } else {
                    ans += duration;
                }
            } else {
                ans += duration;
            }
        }

        return ans;
    }
};