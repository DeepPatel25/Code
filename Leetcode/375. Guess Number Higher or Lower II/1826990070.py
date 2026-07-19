class Solution:
    def getMoneyAmount(self, n: int) -> int:
        dp = {}

        def cost(low, high):
            if high <= low:
                return 0
            
            if (low, high) in dp:
                return dp[(low, high)]

            output = float('inf')
            for i in range(low, high):
                output = min(output, i + max(cost(low, i - 1), cost(i + 1, high)))

            dp[(low, high)] = output
            return dp[(low, high)]

        return cost(1, n)