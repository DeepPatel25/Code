class Solution {
    public int arrangeCoins(int n) {
        int count = 0;
        int i=1;
        while(true){
            if(i<=n){
                n = n-i;
                count++;
                i++;
            } else {
                break;
            }
        }
        
        return count;
    }
}