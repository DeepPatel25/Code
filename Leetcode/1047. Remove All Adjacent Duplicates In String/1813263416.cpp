#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        stack<char> st;

        // Traverse all characters in the string
        for (char ch : s) {
            // If top of stack is the same as current char, remove it
            if (!st.empty() && st.top() == ch)
                st.pop();
            else
                st.push(ch);
        }

        // More efficient: build string using stack size
        string ans;
        ans.reserve(st.size()); // avoid reallocations

        // Pop all elements and build string in reverse
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
