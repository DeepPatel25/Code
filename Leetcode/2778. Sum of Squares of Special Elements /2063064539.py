class Solution:
    def sumOfSquares(self, nums: List[int]) -> int:
        sum, n = 0, len(nums)

        for i in range(0, n):
            if (n % (i + 1)) == 0:
                sum += (nums[i] * nums[i])
        
        return sum