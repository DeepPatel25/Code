class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
        int i = 0, j = 0;

        while(k-- > 0) {
            ans.push_back({nums1[i], nums2[j]});

            if(nums1[i + 1] <= nums2[j + 1]) i++;
            else j++;
        }

        return ans;
    }
};