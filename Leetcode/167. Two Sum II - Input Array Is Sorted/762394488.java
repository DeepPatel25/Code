class Solution {
    public int[] twoSum(int[] arr, int target) {
        int[] ans = new int[2];
        int start=0;
        int end= arr.length-1;
        
        while(start<end){
            int sum = arr[start] + arr[end];
            
            if(sum>target)
                end--;
            else if(sum<target)
                start++;
            else{
                ans[0] = start+1;
                ans[1] = end+1;
                break;
            }
        }
        
        return ans;
    }
}