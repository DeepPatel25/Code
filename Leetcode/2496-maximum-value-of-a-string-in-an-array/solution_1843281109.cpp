class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int mx{};

        for (const string& s: strs) {
            int val{};

            for (const int& c: s) {
                if (48 <= c and 57 >= c)
                    val = val * 10 + (c - 48);
                else {
                    val = s.size();
                    break;
                }
            }

            mx = max(val, mx);
        }

        return mx;
    }
};