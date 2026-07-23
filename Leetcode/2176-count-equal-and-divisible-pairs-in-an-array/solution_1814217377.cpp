class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int count = 0, n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j] && (i * j) % k == 0)
                    count++;
            }
        }

        return count;
    }
};