class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n = nums.size();

        while (n != 1) {
            bool flag = false;
            for(int i = 0; i < n; i += 2) {
                if (flag) {
                    nums[i] = max(nums[i], nums[i + 1]);
                } else {
                    nums[i] = min(nums[i], nums[i + 1]);
                }
                flag = !flag;
            }
            
            n /= 2;
        }

        return nums[0];
    }
};