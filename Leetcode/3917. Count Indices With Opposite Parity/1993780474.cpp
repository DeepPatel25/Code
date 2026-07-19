class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int countOdd = 0, countEven = 0;

        for (int i = n - 1; i >= 0; i--) {
            if (i == n - 1) {
                if (nums[i] % 2 == 0)
                    countEven++;
                else
                    countOdd++;
            } else {
                if (nums[i] % 2 == 0) {
                    ans[i] = countOdd;
                    countEven++;
                } else {
                    ans[i] = countEven;
                    countOdd++;
                }
            }
        }

        return ans;
    }
};