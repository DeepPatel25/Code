class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int val = 0, n = nums.size();
        vector<bool> res(n, false);

        for (int i = 0; i < n; i++) {
            val = ((val << 1) + nums[i]) % 5;
            res[i] = val == 0;
        }

        return res;
    }
};