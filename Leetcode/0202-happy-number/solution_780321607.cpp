class Solution {
public:
    bool isHappy(int n) {
        if(n==1 || n==7) return true;
        if(n<=9) return false;
        
        int sum = 0;
        while(n>0){
            int rem = n%10;
            n/=10;
            sum+=pow(rem,2);
        }
        return isHappy(sum);
    }
};