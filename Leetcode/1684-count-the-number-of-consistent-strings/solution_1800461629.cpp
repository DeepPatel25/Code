class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> mp(26, 0);

        for (char ch: allowed)
            mp[ch - 'a']++;
        
        int count = 0;
        for (string s: words) {
            bool valid = true;
            for (char c: s) {
                if (mp[c - 'a'] <= 0) {
                    valid = false;
                    break;
                }
            }

            if (valid) ++count;
        }

        return count;
    }
};