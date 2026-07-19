class Solution {
public:
    string largestEven(string s) {
        while (s.size() > 0 && s[s.size() - 1] == '1') {
            s.pop_back();
        }

        return s;
    }
};