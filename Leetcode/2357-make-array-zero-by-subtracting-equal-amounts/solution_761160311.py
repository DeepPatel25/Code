class Solution(object):
    def minimumOperations(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        def nonz(a):
            mini = 101
            for i in a:
                if i==0:
                    continue
                else:
                    mini=min(mini, i)
            
            return mini
        
        c=0
        while(sum(nums)!=0):
            mi=nonz(nums)
            for i, x in enumerate(nums):
                if x-mi<0:
                    nums[i]=0
                else:
                    nums[i]=x-mi
            c+=1
        
        return c