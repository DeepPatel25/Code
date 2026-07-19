class Solution {
public:
    int totalSteps(vector<int>& nums) {
        stack<int> st;
        int maxi = 0;

        int i = 0;
        while(i < nums.size()) {
            st.push(nums[i]);

            int j = i + 1;
            int count = 0;

            while(j < nums.size() && st.top() > nums[j]) {
                count++;
                maxi = max(count, maxi);

                j++;
            }

            i = j;
        }

        return maxi;
    }
};