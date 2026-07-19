class Solution {
public:
    int numSub(string s) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int cnt = 0, total = 0, mod = 1e9 + 7;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1')
                cnt++;
            else {
                cnt = 0;
                continue;
            }
            
            total = (total + cnt) % mod;
        }

        return total;
    }
};