class Solution {
    public boolean isUgly(int n) {
        if(n==1 || n==2 || n==3 || n==5) return true;
        int[] arr = {2,3,5};
        
        for(int i: arr){
            while(n%i==0)
                n/=i;
        }
        
        return n==1;
    }
}