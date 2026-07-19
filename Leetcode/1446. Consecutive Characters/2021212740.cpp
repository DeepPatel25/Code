class Solution {
public:
    int maxPower(string s) {
        if (s.length() == 1)
            return 1;

        int res = 1, curr = 1;
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == s[i + 1]) {
                curr++;
                res = max(res, curr);
            } else {
                curr = 1;
            }
        }

        return res;
    }
};