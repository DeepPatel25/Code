class Solution {
    public boolean isPowerOfFour(int n) {
        if(n==0) return false;
        if(n==1) return true;
        
        int i=1;
        while(true){
            if(n==Math.pow(4,i))
                return true;
            else if(n>Math.pow(4,i))
                i++;
            else return false;
        }
    }
}