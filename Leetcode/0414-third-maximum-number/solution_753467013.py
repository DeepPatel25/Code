class Solution(object):
    def thirdMax(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        ans = set(nums)
        ans = list(ans)
        
        if(len(ans)>=3):
            return ans[-3]
        if len(ans)==2:
            return ans[-1]
        if len(ans)==1:
            return ans[-1]
        if len(ans)==0:
            return 0
        