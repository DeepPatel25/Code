class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int> mp;
        for(int i = 0; i < s.size(); i++) mp[s[i]] = i;

        int maxi = 0, start = 0;
        vector<int> ans;

        for(int i = 0; i < s.size(); i++) {
            maxi = max(maxi, mp[s[i]]);

            if(i == maxi) {
                ans.push_back(maxi - start + 1);
                start = i + 1;
            }
        }

        return ans;
    }
};