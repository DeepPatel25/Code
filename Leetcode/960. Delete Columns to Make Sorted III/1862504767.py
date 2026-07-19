class Solution:
    def minDeletionSize(self, A: List[str]) -> int:
        W = len(A[0])
        dp = [1] * W

        for i in range(W - 2, -1, -1):
            for j in range(i +  1, W):
                for row in A:
                    if row[i] > row[j]:
                        break
                else:
                    dp[i] = max(dp[i], 1 + dp[j])
        
        return W - max(dp)