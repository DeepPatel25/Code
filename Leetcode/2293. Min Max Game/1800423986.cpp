class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n = nums.size();

        while (n != 1) {
            bool flag = false;
            for(int i = 0, j = 0; i < n; i += 2, j++) {
                if (flag)
                    nums[j] = max(nums[i], nums[i + 1]);
                else
                    nums[j] = min(nums[i], nums[i + 1]);
                flag = !flag;
            }

            n /= 2;
        }

        return nums[0];
    }
};