class Solution {
public:
    string sortSentence(string s) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        vector<string> ans(9, "");
        string curr = "";
        int lastPos = -1;

        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if ((s[i] - '0' >= 1 && s[i] - '0' <= 9) && s[i] != 'a') {
                int k = s[i] - '0';
                lastPos = max(lastPos, s[i] - '0');
                ans[k - 1] = curr;
                curr = "";
            } else if (s[i] != ' ') {
                curr += s[i];
            }
        }

        string ans1 = "";
        for (int i = 0; i < lastPos; i++) {
            ans1 += ans[i];

            if (i != lastPos - 1) ans1 += " ";
        }

        return ans1;
    }
};