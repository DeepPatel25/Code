class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int, int> mp;
        int max = INT_MIN, ans = -1;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == key) {
                mp[nums[i + 1]]++;

                if (mp[nums[i + 1]] > max) {
                    max = mp[nums[i + 1]];
                    ans = nums[i + 1];
                }
            }
        }

        return ans;
    }
};