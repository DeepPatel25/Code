class Solution:
    def maximumSum(self, nums: List[int]) -> int:
        nums.sort(reverse=True)

        best = 0
        n = len(nums)

        for i in range(min(10, n)):
            for j in range(i + 1, min(10, n)):
                for k in range(j + 1, min(10, n)):
                    s = nums[i] + nums[j] + nums[k]
                    if s % 3 == 0:
                        best = max(best, s)

        return best