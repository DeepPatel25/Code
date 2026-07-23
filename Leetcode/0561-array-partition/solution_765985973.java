class Solution {
    public int arrayPairSum(int[] nums) {
        Arrays.sort(nums);
        for(int i=2; i<nums.length; i+=2){
            nums[0]+=nums[i];
        return nums[0];
    }
}