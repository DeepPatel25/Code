class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length() != word2.length()) return false;

        vector<int> v1(26, 0), v2(26, 0);
        for(int i = 0; i < word1.length(); i++) v1[word1[i] - 'a']++;
        for(int i = 0; i < word2.length(); i++) v2[word2[i] - 'a']++;

        for(int i = 0; i < 26; i++) {
            if((v1[i] > 0 && v2[i] == 0) || v1[i] == 0 && v2[i] > 0) {
                return false;
            }
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        for(int i = 0; i < 26; i++) {
            if(v1[i] != v2[i]) {
                return false;
            }
        }

        return true;
    }
};