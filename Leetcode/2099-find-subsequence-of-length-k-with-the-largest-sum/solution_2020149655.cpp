class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> pq;
        
        for (int i = 0; i < nums.size(); i++)
            pq.push({nums[i], i});
        
        vector<int> temp(nums.size(), 1e9 + 7);

        while (k--) {
            auto p = pq.top();
            pq.pop();

            temp[p.second] = p.first;
        }

        vector<int> ans;
        int mod = 1e9 + 7;
        for (int i: temp) {
            if (i != mod)
                ans.push_back(i);
        }

        return ans;
    }
};