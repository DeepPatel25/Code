class Solution:
    def maximumScore(self, nums: List[int], s: str) -> int:
        k = s.count('1')
        if k == 0:
            return 0

        last = s.rfind('1')
        c = nums[:last + 1]

        c.sort(reverse=True)
        return sum(c[:k])