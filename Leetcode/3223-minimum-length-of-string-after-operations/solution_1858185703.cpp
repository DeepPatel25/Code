class Solution {
public:
    int minimumLength(string s) {
        int totalSize = s.size();
        map<char, int> mp;

        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;

            if (mp[s[i]] == 3) {
                mp[s[i]] = 1;
                totalSize -= 2;
            }
        }

        return totalSize;
    }
};