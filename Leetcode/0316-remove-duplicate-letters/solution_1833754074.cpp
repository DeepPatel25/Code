class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> freq(26, 0);
        vector<bool> used(26, false);

        for (char c: s)
            freq[c - 'a']++;
        
        stack<char> st;
        
        for (char c: s) {
            freq[c - 'a']--;

            if (used[c - 'a'])
                continue;
            
            while(!st.empty() && st.top() > c && freq[st.top() - 'a'] > 0) {
                used[st.top() - 'a'] = false;
                st.pop();
            }

            st.push(c);
            used[c - 'a'] = true;
        }

        string ans(st.size(), ' ');
        
        for(int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};