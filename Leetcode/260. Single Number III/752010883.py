from collections import Counter

class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        counts = collections.Counter(nums)
        return [key for key, value in counts.items() if value == 1]