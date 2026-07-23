class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;

        for (int i = 0; i < words.size(); i++) {
            // Check is prefix or not
            if (words[i][0] == pref[0]) {
                int j = 0;

                while (j < pref.size() and j < words[i].size() and words[i][j] == pref[j])
                    j++;
                
                if (j == pref.size())
                    count++;
            }
        }

        return count;
    }
};