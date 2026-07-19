class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0;
        int n = nums.size();
        int maxi = INT_MIN;
        int countZero = 0, countOne = 0;

        while(j < n) {
            if(nums[j] == 1) {
                countOne++;
            } else {
                countZero++;
            }
            j++;

            if(countZero > k ) {
                while(countZero > k) {
                    if(nums[i] == 0) countZero--;
                    else countOne--;
                    i++;
                }
            }
            maxi = max(maxi, countZero + countOne);
        }

        return maxi;
    }
};