class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        
        cnt = nums.count(0)
        temp = cnt
        
        while (temp > 0):
            nums.remove(0)
            temp-=1
        
        while (cnt > 0):
            nums.append(0)
            cnt-=1