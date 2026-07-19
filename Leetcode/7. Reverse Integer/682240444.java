class Solution {
    public int reverse(int x) {
        int d=0,n;
        if(x>=0){
            while(x!=0){
               n=x%10;
               d=d*10+n;
               x=x/10; 
            }
        }
        else{
            x = x - (2*x);
            while(x!=0){
               n=x%10;
               d=d*10+n;
               x=x/10; 
            }
            d=d-(2*d);
        }
    return d;
    }
}