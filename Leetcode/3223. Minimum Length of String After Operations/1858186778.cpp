class Solution {
public:
    int minimumLength(string s) {
        int totalSize = s.size();
        vector<int> freq(26, 0);

        for (int i = 0; i < s.size(); i++) {
            int idx = s[i] - 'a';

            freq[idx]++;

            if (freq[idx] == 3) {
                freq[idx] = 1;
                totalSize -= 2;
            }
        }

        return totalSize;
    }
};