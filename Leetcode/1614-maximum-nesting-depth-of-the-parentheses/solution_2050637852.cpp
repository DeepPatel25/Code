class Solution {
public:
    int maxDepth(string s) {
        int maxi = 0;
        stack<char> st;

        for (char c: s) {
            if (c == '(') {
                st.push(c);
                maxi = max((int)st.size(), maxi);
            } else if (c == ')') {
                st.pop();
            } else {
                continue;
            }
        }

        return maxi;
    }
};