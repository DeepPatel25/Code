class Solution(object):
    def sortArrayByParity(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        
        i, len_nums = 0, len(nums)
        while i < len_nums:
            if nums[i]%2 != 0:
                nums[i], nums[len_nums - 1] = nums[len_nums - 1], nums[i]
                len_nums -= 1
            else:
                i += 1
        return nums