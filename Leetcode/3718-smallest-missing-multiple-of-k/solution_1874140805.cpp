class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st;

        for (int &i: nums) {
            st.insert(i);
        }

        int tempValue = k;
        while (st.find(k) != st.end()) {
            k += tempValue;
        }

        return k;
    }
};