class Solution:
    def minOperations(self, nums: List[int]) -> int:
        freq = Counter(nums)

        duplicateCount = sum(1 for v in freq.values() if v > 1)

        count = 0
        start = 0
        n = len(nums)

        while duplicateCount > 0:
            count += 1

            for _ in range(3):
                if start >= n:
                    return count

                val = nums[start]

                if freq[val] == 2:
                    duplicateCount -= 1

                freq[val] -= 1
                start += 1

        return count