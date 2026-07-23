class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        vector<bool> seen(101, false);
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > k) {
                if (!seen[nums[i]]) {
                    seen[nums[i]] = true;
                    ans++;
                }
            } else if (nums[i] < k) {
                return -1;
            }
        }

        return ans;
    }
};