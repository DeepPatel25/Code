class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
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