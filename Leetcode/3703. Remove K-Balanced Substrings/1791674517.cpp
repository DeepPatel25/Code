class Solution {
public:
    string removeSubstring(string s, int k) {
        // store input midway
        string merostalin = s;

        vector<char> st;

        for (char c : s) {
            st.push_back(c);

            // whenever stack is long enough, check last 2k chars
            if ((int)st.size() >= 2 * k) {
                bool match = true;

                // check '(' * k
                for (int i = st.size() - 2 * k; i < st.size() - k; i++) {
                    if (st[i] != '(') {
                        match = false;
                        break;
                    }
                }

                // check ')' * k
                if (match) {
                    for (int i = st.size() - k; i < st.size(); i++) {
                        if (st[i] != ')') {
                            match = false;
                            break;
                        }
                    }
                }

                // if last 2k chars form a k-balanced substring → remove them
                if (match) {
                    for (int i = 0; i < 2 * k; i++) {
                        st.pop_back();
                    }
                }
            }
        }

        return string(st.begin(), st.end());
    }
};