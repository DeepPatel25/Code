class Solution {
public:
    int maxOperations(string s) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int oneCount = 0, ans = 0, n = s.size();

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                if (i + 1 < n && s[i + 1] == '0') {
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