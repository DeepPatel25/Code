class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;

        for (int i = 1; i <= n; i++)
            st.insert(i);

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    int x = nums[i] ^ nums[j] ^ nums[k];
                    if (st.find(x) == st.end())
                        st.insert(x);
                }
            }
        }

        return st.size();
    }
};