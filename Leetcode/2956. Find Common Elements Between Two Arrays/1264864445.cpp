class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1, mp2;
        int nums1Count = 0, nums2Count = 0;

        for(auto it: nums1) mp1[it]++;
        for(auto it: nums2) {
            mp2[it]++;
            if(mp1.find(it) != mp1.end()) nums2Count++;
        }

        for(auto it: nums1) {
            if(mp2.find(it) != mp2.end()) nums1Count++;
        }

        return {nums1Count, nums2Count};
    }
};