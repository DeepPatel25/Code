from typing import List

class Solution:
    def countValidSelections(self, nums: List[int]) -> int:
        """
        Counts the number of valid starting positions (indices where nums[i] == 0)
        and directions (left or right) such that repeatedly moving and toggling 
        directions results in all elements becoming zero.

        Rules:
            - Start from an index i (where nums[i] == 0)
            - Move in direction d (1 for right, -1 for left)
            - While inside array bounds:
                - If nums[i] == 0: move in same direction
                - Else: decrement nums[i] by 1, reverse direction, move
            - Valid if all elements become 0 after simulation
        """
        
        def simulate(start_index: int, direction: int) -> bool:
            """
            Simulates the process starting from 'start_index' and moving initially
            in 'direction'. Returns True if the sequence leads to all zeros.
            """
            arr = nums[:]  # Work on a copy to preserve original list
            i = start_index
            d = direction
            
            while 0 <= i < len(arr):
                if arr[i] == 0:
                    i += d
                else:
                    arr[i] -= 1
                    d = -d  # Reverse direction
                    i += d
            
            return all(x == 0 for x in arr)

        # Optimization: Pre-collect zero indices
        zero_indices = [i for i, val in enumerate(nums) if val == 0]
        res = 0

        # For each zero position, test both left and right directions
        for i in zero_indices:
            if simulate(i, 1):
                res += 1
            if simulate(i, -1):
                res += 1

        return res
