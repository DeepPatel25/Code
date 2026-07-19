class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int max = 0;
        for (int &n: nums) {
            max = ::max(max, n);
            n = gcd(n, max);
        }
        
        ranges::sort(nums);

        long long res = 0;
        for (int i = 0, j = nums.size() - 1; i < j; i++, j --)
            res += gcd(nums[i], nums[j]);
        
        return res;
    }
};