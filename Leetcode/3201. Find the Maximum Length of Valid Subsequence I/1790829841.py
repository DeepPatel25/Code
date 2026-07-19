from typing import List

class Solution:
    def maximumLength(self, nums: List[int]) -> int:
        """
        Find the maximum subsequence length following one of these parity patterns:
        - [0,0]: all even numbers
        - [1,1]: all odd numbers
        - [0,1]: even, odd, even, odd, ...
        - [1,0]: odd, even, odd, even, ...
        """
        
        # Count even and odd numbers directly
        evens = sum(num % 2 == 0 for num in nums)
        odds = len(nums) - evens
        
        res = max(evens, odds)  # handles [0,0] and [1,1]
        
        def longest_alternating(start_parity: int) -> int:
            """
            Compute the longest subsequence that alternates parity,
            starting with 'start_parity' (0=even, 1=odd).
            """
            cnt = 0
            parity = start_parity
            for num in nums:
                if num % 2 == parity:
                    cnt += 1
                    parity ^= 1  # flip between 0 and 1
            return cnt
        
        # Handle [0,1] and [1,0]
        res = max(res, longest_alternating(0), longest_alternating(1))
        
        return res
