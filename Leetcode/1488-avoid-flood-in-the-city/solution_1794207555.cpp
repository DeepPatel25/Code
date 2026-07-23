class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        vector<int> ans(n, 1);
        map<int, int> fullLakes;
        set<int> sunnyDays;;

        for (int i = 0; i < n; i++) {
            int lake = rains[i];
            
            if (lake == 0) {
                sunnyDays.insert(i);
            } else {
                if (fullLakes.count(lake)) {
                    auto it = sunnyDays.upper_bound(fullLakes[lake]);

                    if (it == sunnyDays.end()) return {};

                    ans[*it] = lake;
                    sunnyDays.erase(it);
                }

                ans[i] = -1;
                fullLakes[lake] = i;;
            }
        }

        return ans;
    }
};