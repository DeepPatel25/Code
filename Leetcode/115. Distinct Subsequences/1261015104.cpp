class Solution {
public:
    int count;

    void solve(int i, int j, string &s, string &t) {
        if(j == t.length()) {
            count++;
            return;
        }

        if(i == s.length()) {
            return;
        }

        for(int index = i; i < s.size(); i++) {
            if(s[i] == t[j]) {
                solve(i + 1, j + 1, s, t);
            }
        }
    }

    int numDistinct(string s, string t) {
        count = 0;
        solve(0, 0, s, t);
        return count;
    }
};