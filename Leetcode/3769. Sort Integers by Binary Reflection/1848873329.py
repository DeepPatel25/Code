class Solution:
    def sortByReflection(self, nums: List[int]) -> List[int]:
        def reflect(x: int) -> int:
            r = 0
            while x:
                r = (r << 1) | (x & 1)
                x >>= 1
            return r
        
        return sorted(nums, key=lambda v: (reflect(v), v))