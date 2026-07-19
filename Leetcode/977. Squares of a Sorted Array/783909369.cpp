class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int j = nums.size()-1;
        int k = j;
        int left, right;
        
        for(int i=0; i<=j; i++){
            left = nums[i] * nums[i];
            right = nums[j] * nums[j];
            
            if(left>=right){
                ans[k--] = left;
            } else {
                ans[k--] = right;
                j--;
                i--;
            }
        }
        return ans;
    }
};