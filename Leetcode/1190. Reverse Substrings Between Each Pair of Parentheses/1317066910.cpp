class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        int n = s.size();

        for(int i = 0; i < n; i++) {
            if(s[i] == '(') {
                st.push(i);
            } else if(s[i] == ')') {
                int start = st.top() + 1;
                reverse(s.begin() + start, s.begin() + i);
                st.pop();
            } else {
                continue;
            }
        }

        string ans = "";
        for(auto ch: s) {
            if(ch == '(' || ch == ')') continue;
            ans.push_back(ch);
        }

        return ans;
    }
};