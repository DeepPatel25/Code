class Solution {
    public int sumofdigits(int n){
        int sum = 0;
        while(n!=0){
            sum = sum + (n%10);
            n = n/10;
        }
        return sum;
    }
    
    public int maximumSum(int[] nums) {
        int m = -1;
        int[] arr = new int[nums.length];
        
        for(int i=0; i<nums.length; i++){
            arr[i] = sumofdigits(nums[i]);
        }
        
        for(int i=0; i<nums.length-1; i++){
            for(int j=i+1; j<nums.length; j++){
                if(arr[i]==arr[j]){
                    int temp = nums[i] + nums[j];
                    m = Math.max(m, temp);
                }
            }
        }
        
        return m;
    }
}