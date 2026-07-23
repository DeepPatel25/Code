class Solution {
public:
    vector<int> prevSmaller(vector<int>& heights) {
        int n = heights.size();
        vector<int> ps(n);
        stack<int> st;

        for(int i = 0; i < n; i++) {
            while(!st.empty() && heights[st.top()] >= heights[i])
                st.pop();

            if(!st.empty()) ps[i] = st.top();
            else ps[i] = -1;
            
            st.push(i);
        }

        return ps;
    }

    vector<int> nextSmaller(vector<int>& heights) {
        int n = heights.size();
        vector<int> ns(n);
        stack<int> st;

        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && heights[st.top()] >= heights[i])
                st.pop();

            if(!st.empty()) ns[i] = st.top();
            else ns[i] = n;

            st.push(i);
        }

        return ns;
    }

    int largestRectangleArea(vector<int>& heights) {
        int maxAns = 0;
        vector<int> ps = prevSmaller(heights);
        vector<int> ns = nextSmaller(heights);

        for(int i = 0; i < heights.size(); i++) {
            int curr = (ns[i] - ps[i] - 1) * heights[i];
            maxAns = max(maxAns, curr);
        }

        return maxAns;
    }
};