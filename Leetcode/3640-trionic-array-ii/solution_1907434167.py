class Solution:
    def maxSumTrionic(self, nums: List[int]) -> int:
        n = len(nums)
        ans = float("-inf")
        i = 0

        while i < n:
            j = i + 1
            while j < n and nums[j] > nums[j - 1]: j += 1
            p = j - 1

            if p == i:
                i += 1
                continue
            
            j = p + 1
            while j < n and nums[j] < nums[j - 1]: j += 1
            q = j - 1
            if q == p:
                i = p
                continue
            
            j = q + 1
            while j < n and nums[j] > nums[j - 1]: j += 1
            r = j - 1
            if r == q:
                i = q
                continue
            
            core_sum = sum(nums[k] for k in range(p, q + 1))
            max_left = float("-inf")
            cur = 0

            for k in range(p - 1, i - 1, -1):
                cur += nums[k]
                max_left = max(max_left, cur)
            
            max_right = float("-inf")
            cur = 0
            for k in range(q + 1, r + 1):
                cur += nums[k]
                max_right = max(max_right, cur)
            
            ans = max(ans, core_sum + max_left + max_right)
            i = q
        
        return ans if ans != float("-inf") else -1