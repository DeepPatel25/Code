class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        unordered_map<int, int> mp;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) mp[nums[i] % value]++;
            else if (nums[i] == 0) mp[nums[i]]++;
            else mp[((nums[i] % value) + value) % value]++;
        }

        int i = 0;
        bool notFound = true;
        while(notFound) {
            if (mp[i] > 0) {
                i++;
            } else {
                return i;
            }
        }

        return 0;
    }
};