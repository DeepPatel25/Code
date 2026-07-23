class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != mini && nums[i] != maxi) return nums[i];
        }

        return -1;
    }
};