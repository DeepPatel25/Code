class Solution {
public:
    int maxDistinct(string s) {
        set<char> st;
        for (int i = 0; i < s.size(); i++)
            st.insert(s[i]);

        return st.size();
    }
};