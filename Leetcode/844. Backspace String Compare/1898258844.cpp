class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a = "", b = "";

        for (char c: s) {
            if (c == '#') {
                if (a.size() > 0) a.pop_back();
                continue;
            }

            a += c;
        }


        for (char c: t) {
            if (c == '#') {
                if (b.size() > 0) b.pop_back();
                continue;
            }

            b += c;
        }

        return a == b;
    }
};