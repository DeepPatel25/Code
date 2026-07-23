class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1, s2;

        for(int i = 0; i < nums1.size(); i++) s1.insert(nums1[i]);
        for(int i = 0; i < nums2.size(); i++) s2.insert(nums2[i]);

        vector<int> temp1, temp2;
        for(auto val: s1) {
            if(s2.find(val) == s2.end()) temp1.push_back(val);
        }

        for(auto val: s2) {
            if(s1.find(val) == s1.end()) temp2.push_back(val);
        }

        return {temp1, temp2};
    }
};