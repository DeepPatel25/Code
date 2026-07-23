class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int start = 1;
        int sum = 0;
        int count = 0;

        for(int j = 1; j <= n; j++) {
            sum += j;
            
            while(sum >= n) {
                if(sum == n) {
                    count++;
                }
                sum -= start++;
            }
        }

        return count;
    }
};