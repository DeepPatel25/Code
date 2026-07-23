class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int i = 0;
        long long int j = sqrt(c);
        
        while(i<=j){
            long long int temp = i * i + j * j;
            
            if(temp>c) j--;
            else if(c>temp) i++;
            else return true;
        }
        return false;
    }
};