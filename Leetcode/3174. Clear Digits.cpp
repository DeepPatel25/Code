class Solution {
public:
    string clearDigits(string s) {
        string ans = "";

        for (char c: s) {
            if (c >= '0' and c <= '9') {
                if (ans.size() > 0)
                    ans.pop_back();
            } else
                ans += c;
        }

        return ans;
    }
};
