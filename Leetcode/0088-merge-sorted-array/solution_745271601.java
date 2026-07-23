class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        if(n==0){
            return;
        }
        
        int i=m;
        int j=0;
        
        while(i<nums1.length && j<n){
            nums1[i]=nums2[j];
            i++; j++;
        }
        
        Arrays.sort(nums1);
    }
}