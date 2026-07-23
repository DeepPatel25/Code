import numpy as np

class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        
        num3 = nums1 + nums2
        n1 = np.array(num3)
        
        return np.median(n1)