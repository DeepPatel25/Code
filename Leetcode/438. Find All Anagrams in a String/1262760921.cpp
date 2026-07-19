class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int sLen = s.size(), pLen = p.size();
        if(sLen < pLen) return ans;

        vector<int> pCount(26, 0), sCount(26, 0);

        // Populate the character frequency for the string p
        for(char c: p) pCount[c - 'a']++;

        // Initialize the first window
        for(int i = 0; i < pLen; ++i) sCount[s[i] - 'a']++;

        // Compare the first window
        if(pCount == sCount) ans.push_back(0);

        // Slide the window over the string s
        for(int i = pLen; i < sLen; ++i) {
            sCount[s[i] - 'a']++;
            sCount[s[i - pLen] - 'a']--;
            if(pCount == sCount) ans.push_back(i - pLen + 1);
        }

        return ans;
    }
};
