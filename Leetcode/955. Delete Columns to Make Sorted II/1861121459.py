class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        N = len(strs)
        W = len(strs[0])
        ans = 0
        cur = [""] * N

        for j in range(W):
            cur2 = cur[:]
            for i in range(N):
                cur2[i] += strs[i][j]
            
            if all(cur2[i] <= cur2[i + 1] for i in range(N - 1)):
                cur = cur2
            else:
                ans += 1
        
        return ans