class Solution {
    public int pivotIndex(int[] nums) {
        if(nums==null || nums.length==0){
            return -1;
        }
        
        int total = 0;
        int sum = 0;
        
        for(int i:nums){
            total += i;
        }
        
        for(int i=0; i<nums.length; i++){
            if(sum==total-nums[i]){
                return i;
            }
            sum += nums[i];
            total -= nums[i];
        }
        
        return -1;
    }
}