class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        N = len(strs)
        W = len(strs[0])
        cuts = [False] * (N - 1)
        ans = 0

        for j in range(W):
            can_keep = True

            for i in range(N - 1):
                if not cuts[i] and strs[i][j] > strs[i + 1][j]:
                    can_keep = False
                    break
            
            if not can_keep:
                ans += 1
                continue
            
            for i in range(N - 1):
                if strs[i][j] < strs[i + 1][j]:
                    cuts[i] = True
        
        return ans