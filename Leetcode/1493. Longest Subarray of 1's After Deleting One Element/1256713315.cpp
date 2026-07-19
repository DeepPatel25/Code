class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0, j = 0;
        int n = nums.size();
        int countZero = 0, countOne = 0;
        int maxi = INT_MIN;

        while(j < n) {
            if(nums[j] == 0) {
                countZero++;
            } else {
                countOne++;
            }
            j++;

            while(countZero > 1 && i < n) {
                if(nums[i] == 0) {
                    countZero--;
                } else {
                    countOne--;
                }
                i++;
            }

            maxi = max(maxi, countOne);
        }

        return countOne == n ? n - 1 : maxi;
    }
};