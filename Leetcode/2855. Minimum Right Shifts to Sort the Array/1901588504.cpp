class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        while (n--) {
            if (is_sorted(nums.begin(), nums.end())) {
                return count;
            }

            int lastValue = nums[nums.size() - 1];
            nums.insert(nums.begin(), lastValue);
            nums.pop_back();
            count++;
        }

        return -1;
    }
};