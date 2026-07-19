class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        
        ans = []
        
        for i in nums:
            if i in ans:
                return True
            ans.append(i)
        
        return False