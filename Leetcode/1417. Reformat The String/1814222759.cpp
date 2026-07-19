class Solution {
public:
    string reformat(string s) {
        int n = s.size();
        string alpha, num;

        for (char ch: s) {
            if (isdigit(ch))
                num += ch;
            else
                alpha += ch;
        }

        string ans;
        int sz = min(num.size(), alpha.size());
        
        if (abs((int)num.size() - (int)alpha.size()) > 1)
            return "";
        
        int i;
        for (i = 0; i < sz; i++) {
            if (alpha.size() > num.size()) {
                ans += alpha[i];
                ans += num[i];
            } else {
                ans += num[i];
                ans += alpha[i];
            }
        }

        if (i < alpha.size()) ans += alpha[i];
        if (i < num.size()) ans += num[i];

        return ans;
    }
};