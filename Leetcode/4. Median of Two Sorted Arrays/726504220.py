class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        
        nums = nums1 + nums2
        nums.sort()
        return (nums[len(nums) >> 1] + nums[(len(nums) - 1) >> 1]) / 2.0