class Solution {
public:
    int addDigits(int num) {
        int ans = 0;
        
        while(num!=0){
            int n = num%10;
            ans+=n;
            num/=10;
        }
        
        if(ans<10)
            return ans;
        
        return addDigits(ans);
    }
};