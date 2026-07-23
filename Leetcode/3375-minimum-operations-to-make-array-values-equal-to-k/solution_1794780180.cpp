class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> st;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < k)
                return -1;
            else if (nums[i] == k)
                continue;
            else
                st.insert(nums[i]);
        }

        return st.size();
    }
};