class Solution:
    def maxGoodNumber(self, nums: List[int]) -> int:
        nums = [format(num, 'b') for num in nums]
        maximum = 0

        for i, a in enumerate(nums):
            for j, b in enumerate(nums):
                for k, c in enumerate(nums):
                    if len(set([i, j, k])) != 3:
                        continue
                    
                    maximum = max(maximum, int(f"{a}{b}{c}", 2))

        return maximum