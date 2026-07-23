class Solution:
    def maximumScore(self, nums: List[int], s: str) -> int:
        ones = [i for i, c in enumerate(s) if c == '1']
        if not ones:
            return 0

        max_heap = []
        ans = 0
        idx = 0

        for slot, limit in enumerate(ones):
            while idx <= limit:
                heapq.heappush(max_heap, -nums[idx])
                idx += 1

            ans += -heapq.heappop(max_heap)

        return ans