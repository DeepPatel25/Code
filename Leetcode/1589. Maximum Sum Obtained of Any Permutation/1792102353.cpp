class Solution {
public:
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
        int n = nums.size();
        int modulo = 1e9 + 7;

        vector<long long> freq(n+1, 0);

        // Difference array for requests
        for (auto &r : requests) {
            freq[r[0]]++;
            if (r[1] + 1 < n)
                freq[r[1] + 1]--;
        }

        // Prefix sum → actual frequencies
        for (int i = 1; i < n; i++)
            freq[i] += freq[i-1];

        freq.pop_back(); // remove extra element

        // Sort nums and freq (descending)
        sort(nums.begin(), nums.end(), greater<int>());
        sort(freq.begin(), freq.end(), greater<long long>());

        long long ans = 0;
        for (int i = 0; i < n; i++) {
            ans = (ans + (nums[i] * freq[i]) % modulo) % modulo;
        }

        return ans;
    }
};