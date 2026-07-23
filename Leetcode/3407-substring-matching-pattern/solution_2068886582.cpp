class Solution {
public:
    bool hasMatch(string s, string p) {
        int i = 0, j = 0;

        while (i < s.size() and j < p.size()) {
            if (p[j] == '*')
                j++;
            else if (s[i] == p[j]) {
                i++; j++;
            } else {
                i++;
            }
        }

        if (j == p.size() - 1 and p[j] == '*' and i == s.size())
            return true;
        return j == p.size();
    }
};