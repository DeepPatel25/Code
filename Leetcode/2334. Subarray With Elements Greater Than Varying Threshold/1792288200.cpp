class Solution {
public:
    int validSubarraySize(vector<int>& nums, int k) {
        int n = nums.size();

        // Previous Smaller Element (PSE) and Next Smaller Element (NSE)
        vector<int> pse(n, -1);
        vector<int> nse(n, n);

        stack<int> st;
        // Compute PSE for each element
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[i] <= nums[st.top()]) {
                st.pop();
            }
            pse[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        stack<int> sp;
        // Compute NSE for each element
        for (int i = n - 1; i >= 0; i--) {
            while (!sp.empty() && nums[i] <= nums[sp.top()]) {
                sp.pop();
            }
            nse[i] = sp.empty() ? n : sp.top();
            sp.push(i);
        }

        // Check valid subarray sizes
        for (int i = 0; i < n; i++) {
            int left = pse[i] + 1;
            int right = nse[i] - 1;
            int len = right - left + 1;

            if (nums[i] > (k / len)) {
                return len;
            }
        }

        return -1;
    }
};
