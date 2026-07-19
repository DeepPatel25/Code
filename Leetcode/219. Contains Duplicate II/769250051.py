class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        
        temp = {}
        
        for x, y in enumerate(nums):
            if y in temp and x - temp[y]<=k:
                return True
            temp[y] = x
        
        return False