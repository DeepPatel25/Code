class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char, int> mp;
        for(int i = 0; i < s.length(); i++) mp[s[i]] = i;
        
        int sum = 0;
        for(int i = 0; i < t.length(); i++) sum += abs(i - mp[t[i]]);
        
        return sum;
    }
};