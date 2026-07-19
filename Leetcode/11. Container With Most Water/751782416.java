class Solution {
    public int maxArea(int[] height) {
        int ans = Integer.MIN_VALUE;
        
        for(int i=0; i<height.length-1; i++){
            for(int j=i+1; j<height.length; j++){
                int m = Math.min(height[i], height[j]);
                int l = j - i;
                int prod = m * l;
                ans = Math.max(prod, ans);
            }
        }
        
        return ans;
    }
}