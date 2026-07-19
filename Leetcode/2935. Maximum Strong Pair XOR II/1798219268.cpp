class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int maxi = INT_MIN, n = nums.size();

        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                if (abs(nums[i] - nums[j]) <= min(nums[i], nums[j]))
                    maxi = max(maxi, nums[i] ^ nums[j]);
            }
        }

        return maxi;
    }
};