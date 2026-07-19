class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int start = INT_MAX,
            end = INT_MIN;
        unordered_set<int> s;

        for (int i: nums) {
            if (i < start) start = i;
            if (i > end) end = i;
            s.insert(i);
        }

        vector<int> ans;
        while (start <= end) {
            if (s.find(start) == s.end())
                ans.push_back(start);
            start++;
        }

        return ans;
    }
};