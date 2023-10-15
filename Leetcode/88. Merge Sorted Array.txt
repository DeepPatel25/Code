class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx = nums1.size() - 1;
        int firstArrIdx = m - 1;
        int secondArrIdx = n - 1;

        while(firstArrIdx >= 0 && secondArrIdx >= 0) {
            if(nums1[firstArrIdx] >= nums2[secondArrIdx]) {
                nums1[idx--] = nums1[firstArrIdx--];
            } else {
                nums1[idx--] = nums2[secondArrIdx--];
            }
        }

        while(firstArrIdx >= 0) {
            nums1[idx--] = nums1[firstArrIdx--];
        }

        while(secondArrIdx >= 0) {
            nums1[idx--] = nums2[secondArrIdx--];
        }
    }
};