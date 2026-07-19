class Solution {
    public int[] twoSum(int[] arr, int target) {
        int[] ans = new int[2];
        
        for(int i=0; i<arr.length-1; i++){
            int temp = target - arr[i];
            for(int j=i+1; j<arr.length; j++){
                if(temp==arr[j]){
                    ans[0] = i+1;
                    ans[1] = j+1;
                    return ans;
                }
            }
        }
        
        return ans;
    }
}