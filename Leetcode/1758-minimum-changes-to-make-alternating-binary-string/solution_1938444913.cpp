class Solution {
public:
    int minOperations(string s) {
        int c1 = 0, c2 = 0;
        bool f1 = true, f2 = false;

        for (int i = 0; i < s.size(); i++) {
            if (f1) {
                if (s[i] != '0')
                    c1++;
            } else {
                if (s[i] != '1')
                    c1++;
            }

            if (!f2) {
                if (s[i] != '1')
                    c2++;
            } else {
                if (s[i] != '0')
                    c2++;
            }

            f1 = !f1;
            f2 = !f2;
        }

        return min(c1, c2);
    }
};