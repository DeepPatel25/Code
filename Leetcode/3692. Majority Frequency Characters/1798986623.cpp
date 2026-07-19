class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char, int> mp;
        for(char ch: s)
            mp[ch]++;
        unordered_map<int, int> mp1;
        int maxi = 0;
        for(auto it: mp) {
            mp1[it.second]++;
            if (mp1[it.second] > maxi)
                maxi = it.second;
        }
        string ans = "";
        for(auto it: mp)
            if (maxi == it.second)
                ans += it.first;
        return ans;
    }
};