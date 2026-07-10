class Solution {
  public:
    int getCount(int n) {
        int start = 1, end = 1;
        int sum = 0, count = 0;
        
        while (start <= end and end < n) {
            if (sum < n) {
                sum += end;
                end++;
            } else if (sum == n) {
                count++;
                sum -= start;
                start++;
            } else {
                sum -= start;
                start++;
            }
        }
        
        return count;
    }
};
