class Solution {
    public double myPow(double x, int n) {
        double d=1;
        if(n>0){
            for(int i=0; i<n; i++){
                d = d * x; 
            }    
        }
        else if(n==0){
            d=1;
        }
        else{
            for(int i=n; i>=-1; i++){
                d=d/x;
            }
        }
        return d;
    }
}