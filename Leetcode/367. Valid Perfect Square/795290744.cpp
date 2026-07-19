class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=0;
        
        int ans = i*i;
        while(ans<=num){
            if(ans==num){
                return true;
            } else {
                i++;
                ans=i*i;
            }
        }
        
        return false;
    }
};