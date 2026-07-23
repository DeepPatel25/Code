class Solution {
public:
    int countPermutations(vector<int>& nums) {
        const int mod = 1e9 + 7;
        int n = nums.size();

        for (int i = 1; i < n; i++)
            if (nums[i] <= nums[0])
                return 0;
        
        long long ans = 1;
        for (int i = 1; i < n; i++)
            ans = (ans * i) % mod;
        
        return (int)ans;
    }
};