class Solution: 
    def numWays(self, steps: int, arrLen: int) -> int:
        @cache
        def dfs(steps, idx):
            if idx - 0 > steps:
                return 0
            if idx >= arrLen or idx < 0:
                return 0
            if steps == 0:
                if idx == 0:
                    return 1
                return 0

            temp = 0
            temp += dfs(steps - 1, idx - 1)
            temp += dfs(steps - 1, idx)
            temp += dfs(steps - 1, idx + 1)

            return temp % MOD
        
        MOD = 10**9 + 7
        return dfs(steps, 0)