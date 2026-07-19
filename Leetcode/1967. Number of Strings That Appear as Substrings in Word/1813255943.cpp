class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0, n = patterns.size(), m = word.size();

        for (int i = 0; i < n; i++) {
            int j = 0, k = 0;

            while(j < patterns[i].size() && k < m) {
                if (word[k] == patterns[i][j])
                    j++;
                k++;
            }

            if (j == patterns[i].size())
                count++;
        }

        return count;
    }
};