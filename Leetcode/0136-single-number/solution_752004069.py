from collections import Counter

class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        return (Counter(nums).most_common()[-1])[0]
        
        # i=0
        # while len(nums) > 0:
        #     a = nums[i]
        #     nums.remove(nums[i])
        #     if a in nums:
        #         nums.remove(a)
        #     else:
        #         return a