class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0)
            return false;
        
        if(n==1){
            return true;
        }
        
        int i = 1;
        
        while(true){
            if(n==pow(3, i)){
                return true;
            }
            else if(n>pow(3, i)){
                i++;
            } else{
                return false;
            }
        }
    }
};