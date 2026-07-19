class Solution {
private:
    void helper(stack<int>& st, char ch) {
        int val2 = st.top();
        st.pop();

        int val1 = st.top();
        st.pop();

        switch(ch) {
            case '+':
                st.push(val1 + val2);
                return;
            case '-':
                st.push(val1 - val2);
                return;
            case '*':
                st.push(val1 * val2);
                return;
            case '/':
                cout << val1 << ' ' << val2 << endl;
                st.push(val1 / val2);
                return;
        }
    }
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(int i = 0; i < tokens.size(); i++) {
            if(tokens[i].length() == 1) {
                if(tokens[i][0] >= '0' && tokens[i][0] <= '9') {
                    st.push(tokens[i][0] - '0');
                } else {
                    helper(st, tokens[i][0]);
                }
            } else {
                st.push(stoi(tokens[i]));
            }
        }

        return st.top();
    }
};