class Solution {
    public List<Integer> countSmaller(int[] nums) {
        List<Integer> li = new ArrayList<>();
        
        for(int i=0; i<nums.length-1; i++){
            int count = 0;
            for(int j=i+1; j<nums.length; j++){
                if(nums[i]>nums[j]){
                    count++;
                }
            }
            li.add(count);
        }
        li.add(0);
        
        return li;
    }
}