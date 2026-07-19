class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int diff) {
        long long count = 0;
        int n = nums1.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums1[i] - nums1[j] <= nums2[i] - nums2[j] + diff)
                    count++;
            }
        }

        return count;
    }
};