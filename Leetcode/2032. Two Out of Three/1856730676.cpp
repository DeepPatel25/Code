class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, int> mp;
        vector<int> ans;
        set<int> st;

        for (auto x: nums1) st.insert(x);
        for (auto x: st) mp[x]++;
        st.clear();

        for (auto x: nums2) st.insert(x);
        for (auto x: st) mp[x]++;
        st.clear();

        for (auto x: nums3) st.insert(x);
        for (auto x: st) mp[x]++;
        st.clear();

        for (auto x: mp)
            if (x.second >= 2)
                ans.push_back(x.first);
        
        return ans;
    }
};