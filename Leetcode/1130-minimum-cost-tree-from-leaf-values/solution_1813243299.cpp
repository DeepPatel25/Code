#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        // The idea:
        // Build the tree from leaves such that each internal node’s value = product of
        // the two smallest possible adjacent leaves at that point (greedy strategy).
        //
        // The stack keeps track of decreasing elements.
        // When a new element 'a' is greater than or equal to the stack’s top,
        // we pop and form a product with the smaller of its two neighbors.

        int result = 0;
        stack<int> st;
        st.push(INT_MAX);  // Sentinel value to avoid empty checks

        for (int a : arr) {
            // While top of stack is <= current value
            while (st.top() <= a) {
                int mid = st.top();
                st.pop();
                // The cost contributed by 'mid' is mid * min(left, right)
                result += mid * min(st.top(), a);
            }
            st.push(a);
        }

        // Handle remaining stack elements
        while (st.size() > 2) { // >2 because one is INT_MAX sentinel
            int top = st.top();
            st.pop();
            result += top * st.top();
        }

        return result;
    }
};
