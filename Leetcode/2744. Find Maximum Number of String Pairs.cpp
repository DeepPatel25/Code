class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string, int> mp;
        int count = 0;

        for (string& word: words) {
            if (mp.find(word) != mp.end()) {
                count += mp[word];
            }

            reverse(word.begin(), word.end());
            mp[word]++;
        }

        return count;
    }
};
