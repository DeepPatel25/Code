class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        nums.sort()
        arr = []
        for i in range(len(nums)):
            l = i+1
            r = len(nums)-1
            while l < r:    
                if nums[l]+nums[r] == -nums[i]:
                    a =[nums[i],nums[l],nums[r]]
                    if a not in arr:
                        arr.append(a)
                    l+=1
                elif nums[l] + nums[r] > -nums[i]:
                    r-=1
                else:
                    l+=1
        return arr