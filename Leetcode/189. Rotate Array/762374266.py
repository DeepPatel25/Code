class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        
        while(k>0):
            i = nums[-1]
            nums.remove(i)
            nums.insert(0, i)
            k=k-1
        