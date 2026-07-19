class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len = nums.size()-1;
        
        int result = (len * (len + 1 )) / 2;
        int sum = 0;
        
        for(int i=0; i<=len; i++){
            sum+=nums[i];
        }
        
        return sum-result;
    }
};