MOD = 10**9 + 7

class Solution:
    def sumAndMultiply(self, s: str, queries: List[List[int]]) -> List[int]:
        ans = []

        for l, r in queries:
            total = 0
            num = 0

            while l <= r:
                if s[l] != '0':
                    digit = int(s[l])
                    total += digit
                    num = (num * 10 + digit) % MOD
                l += 1

            ans.append((total * num) % MOD)

        return ans