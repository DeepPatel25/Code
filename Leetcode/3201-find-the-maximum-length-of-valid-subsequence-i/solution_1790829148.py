class Solution:
    def maximumLength(self, nums: List[int]) -> int:
        res = 0

        # Patterns corresponse to:
        # [0, 0] -> all evens
        # [1, 1] -> all odds
        # [0, 1] -> even, odd, even, ...
        # [1, 0] -> odd, even, odd, ...

        for pattern in [[0, 0], [1, 1], [0, 1], [1, 0]]:
            cnt = 0
            for num in nums:
                if num % 2 == pattern[cnt % 2]:
                    cnt +=1
            res = max(res, cnt)
        return res    