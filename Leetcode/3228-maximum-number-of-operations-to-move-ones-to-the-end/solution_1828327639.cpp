class Solution {
public:
    int maxOperations(string s) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        reverse(s.begin(), s.end());

        int n = s.length(), startIndex = n;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                startIndex = i;
                break;
            }
        }

        int impact = 1, ans = 0, j = -1;
        for (int i = startIndex; i < n; i++) {
            if (s[i] == '0') continue;
            
            int ct = 0;
            for (j = i; j < n; j++) {
                if (s[j] == '0') break;
                ct++;
            }

            ans += ct * impact;
            impact++;
            i = j - 1;
        }

        return ans;
    }
};