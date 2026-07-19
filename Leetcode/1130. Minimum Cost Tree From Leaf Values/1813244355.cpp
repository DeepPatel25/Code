#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        // Disable synchronization with C-style I/O for faster input/output
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int result = 0;
        stack<int> st;
        st.push(INT_MAX);  // Sentinel value to simplify logic

        // Traverse all elements in the array
        for (int a : arr) {
            // Maintain a decreasing stack
            while (st.top() <= a) {
                int mid = st.top();
                st.pop();
                // Add cost: mid * smaller neighbor (between left and right)
                result += mid * min(st.top(), a);
            }
            st.push(a);
        }

        // Combine remaining elements in the stack
        while (st.size() > 2) { // Leave sentinel (INT_MAX)
            int top = st.top();
            st.pop();
            result += top * st.top();
        }

        return result;
    }
};
