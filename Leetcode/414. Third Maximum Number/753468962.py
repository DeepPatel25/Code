class Solution(object):
    def thirdMax(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        return list(sorted(set(nums)))[-3] if len(set(nums)) >= 3 else max(set(nums))