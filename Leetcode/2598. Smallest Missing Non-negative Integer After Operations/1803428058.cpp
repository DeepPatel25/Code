class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int n = nums.size();
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            int num = nums[i];
            
            if (num < 0)
                num = (num) % value + value;
            
            num %= value;
            mp[num]++;
        }

        int ans = 0, req_val = 0;
        while(1) {
            if (mp[req_val] > 0) {
                ans++;
                mp[req_val]--;
            } else {
                break;
            }

            req_val = (req_val + 1) % value;
        }

        return ans;
    }
};