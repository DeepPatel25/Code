class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2);

        for (int i = 0; i < n; i++) {
            int a = (nums[i] % (n + 1)) - 1;
            nums[a] = nums[a] + (n + 1);
        }

        for (int j = 0; j < n; j++) {
            if (nums[j] / (n + 1) == 2) ans[0] = j + 1;
            else if (nums[j] / (n + 1) == 0) ans[1] = j + 1;
        }

        return ans;
    }
};