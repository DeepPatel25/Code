class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != target) continue;
            if(ans[0] == -1) ans[0] = i;
            ans[1] = i;
        }

        return ans;
    }
};