class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=2; i<nums.size(); i+=2){
            nums[0]+=nums[i];
        }
        return nums[0];
    }
};