class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxEle = *max_element(nums.begin(), nums.end());
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
            count += (maxEle - nums[i]);
        return count;
    }
};