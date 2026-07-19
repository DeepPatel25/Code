class Solution:
    def sumAndMultiply(self, s: str, queries: List[List[int]]) -> List[int]:
        ans = []
        MOD = 10**9 + 7

        for l, r in queries:
            sum = 0
            part = ""

            while l <= r:
                if s[l] != '0':
                    sum += int(s[l])
                    part += s[l]
                l += 1

            ans.append((sum * (int(part) if part else 0)) % MOD)        

        return ans