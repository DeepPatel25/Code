class Solution:
    def deleteGreatestValue(self, grid: List[List[int]]) -> int:
        return sum(max(c) for c in zip(*[sorted(r) for r in grid]))