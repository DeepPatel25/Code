class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];

        int max1 = 0;
        int max2 = 0;

        for(int i = 0; i < nums.size(); i++){
            if(i%2==0) max1 += nums[i];
            else max2 += nums[i];
        }

        return max(max1, max2);
    }
};