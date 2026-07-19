class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        if (indexDiff <= 0 || valueDiff < 0) return false;

        set<long long> window;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > indexDiff) {
                window.erase(nums[i - indexDiff - 1]);
            }

            auto pos = window.lower_bound((long long)nums[i] - valueDiff);
            if (pos != window.end() && *pos <= (long long)nums[i] + valueDiff) {
                return true;
            }

            window.insert(nums[i]);
        }

        return false;
    }
};