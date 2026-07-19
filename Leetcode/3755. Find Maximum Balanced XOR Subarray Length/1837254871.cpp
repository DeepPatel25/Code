class Solution {
public:
    int maxBalancedSubarray(vector<int>& nums) {
        int maxi = 0, n = nums.size();

        for (int i = 0; i < n; i++) {
            int odd = 0, even = 0;
            int xorValue = 0;
            
            for (int j = i; j < n; j++) {
                nums[j] % 2 == 0 ? even++ : odd++;
                xorValue ^= nums[j];

                if (xorValue == 0 && odd == even)
                    maxi = max(maxi, j - i + 1);
                
            }
        }

        return maxi;
    }
};