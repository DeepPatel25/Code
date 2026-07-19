class Solution:
    def canAliceWin(self, nums: List[int]) -> bool:
        sum = 0

        for num in nums:
            n = str(num)
            if len(n) == 1:
                sum += num
            else:
                sum -= num
        
        return sum != 0