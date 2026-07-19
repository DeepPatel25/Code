#define pii pair<int, int>
#define F first
#define S second

class Solution {
public:
    int totalSteps(vector<int>& nums) {
        stack<pii> st;
        int n = nums.size();

        for(int j = n - 1; j >= 0; j--) {
            int cur = nums[j];
            int steps = 0;

            while(!st.empty()) {
                pii top = st.top();
                if(top.F >= cur) break;

                steps = max(steps + 1, top.S);
                st.pop();
            }

            st.push({cur, steps});
        }

        int ans = 0;
        while(!st.empty()) {
            ans = max(ans, st.top().S);
            st.pop();
        }

        return ans;
    }
};