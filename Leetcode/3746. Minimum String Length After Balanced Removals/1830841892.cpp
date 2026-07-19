class Solution {
public:
    int minLengthAfterRemovals(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            if (st.empty()) {
                st.push(s[i]);
            } else {
                char ch = st.top();

                if (s[i] == 'a' and ch == 'b') {
                    st.pop();
                } else if (s[i] == 'b' and ch == 'a') {
                    st.pop();
                } else {
                    st.push(s[i]);
                }
            }
        }

        return st.size();
    }
};