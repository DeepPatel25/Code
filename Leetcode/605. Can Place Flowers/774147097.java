class Solution {
    public boolean canPlaceFlowers(int[] arr, int n) {
        for(int i=1; i<arr.length-1; i++){
            if(arr[i-1]==0 && arr[i]==0 && arr[i+1]==0){
                arr[i]=1;
                n--;
            }
        }
        if(n>0) return false;
        return true;
    }
}