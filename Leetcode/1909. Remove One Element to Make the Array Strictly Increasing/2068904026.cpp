class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int cnt = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] >= nums[i + 1]) {
                cnt++;
                
                if (i + 2 < nums.size() and nums[i] < nums[i + 2])
                    continue;
                if (i - 1 >= 0 and nums[i - 1] >= nums[i + 1])
                    cnt++;
            }
        }

        return cnt <= 1;
    }
};