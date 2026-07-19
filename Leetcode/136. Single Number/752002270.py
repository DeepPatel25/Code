class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        i=0
        while len(nums) > 0:
            a = nums[i]
            nums.remove(nums[i])
            if a in nums:
                nums.remove(nums[i])
            else:
                return a