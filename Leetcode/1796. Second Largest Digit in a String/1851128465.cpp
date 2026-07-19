class Solution {
public:
    int secondHighest(string s) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int ans = INT_MIN;
        set<int> st;

        for (char ch: s) {
            if (ch >= '0' and ch <= '9') {
                int ascii = ch - 48;
                ans = max(ans, ascii);
                st.insert(ascii);
            }
        }

        if (st.size() == 1)
            return -1;
        
        int result = -1;
        for (auto x: st) {
            if (x < ans && result < x)
                result = x;
        }

        return result;
    }
};