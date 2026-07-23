class Solution {
public:
    int maxOperations(string s) {
        int oneCount = 0, ans = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                if (i + 1 < s.size() && s[i + 1] == '0') {
                    continue;
                } else {
                    ans += oneCount;
                }
            } else {
                oneCount++;
            }
        }

        return ans;
    }
};