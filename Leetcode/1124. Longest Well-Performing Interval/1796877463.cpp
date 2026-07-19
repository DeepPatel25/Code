class Solution {
public:
    int longestWPI(vector<int>& hours) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int tiringDay = 0, n = hours.size(), nonTiringDay = 0, ans = 0;

        for (int i = 0; i < n; i++) {
            if (hours[i] <= 8) {
                if (tiringDay > 0) {
                    nonTiringDay++;

                    if (tiringDay > nonTiringDay) {
                        ans = max(ans, tiringDay + nonTiringDay);
                    } else {
                        tiringDay = 0;
                        nonTiringDay = 0;
                    }
                }
            } else {
                tiringDay++;
                ans = max(ans, tiringDay);
            }
        }

        return ans;
    }
};