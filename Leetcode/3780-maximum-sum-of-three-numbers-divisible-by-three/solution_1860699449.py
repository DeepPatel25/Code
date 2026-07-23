class Solution:
    def maximumSum(self, nums: List[int]) -> int:
        r0, r1, r2 = [], [], []

        for num in nums:
            if num % 3 == 0:
                r0.append(num)
            elif num % 3 == 1:
                r1.append(num)
            else:
                r2.append(num)

        r0.sort(reverse=True)
        r1.sort(reverse=True)
        r2.sort(reverse=True)

        ans = 0

        if len(r0) >= 3:
            ans = max(ans, r0[1] + r0[1] + r0[2])

        if len(r1) >= 3:
            ans = max(ans, r1[0] + r1[1] + r1[2])

        if len(r2) >= 3:
            ans = max(ans, r2[0], r2[1], r2[2])

        if r0 and r1 and r2:
            ans = max(ans, r0[0] + r1[0] + r2[0])

        return ans