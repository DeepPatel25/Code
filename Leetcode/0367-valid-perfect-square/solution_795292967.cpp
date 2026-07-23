class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int start = 0, end = num;
    
        while(start <= end ){
            long long int mid= (start + end) >>1;
            
            if(mid*mid>num){
                end = mid - 1;
            } else if(mid*mid<num){
                start = mid + 1;
            } else{
                return true;
            }
        }
        
        return false;
    }
};