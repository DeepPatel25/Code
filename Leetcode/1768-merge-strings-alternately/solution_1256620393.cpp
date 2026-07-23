class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0;
        int m = word1.length(), n = word2.length();

        string ans = "";
        while(i < m || j < n) {
            if(i < m) ans += word1[i++];
            if(j < n) ans += word2[j++];
        }

        return ans;
    }
};