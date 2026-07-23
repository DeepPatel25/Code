class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(char ch: s) {
            if (!st.empty() and st.top() == ch)
                st.pop();
            else
                st.push(ch);
        }

        string ans = "";
        while(!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};