class Solution:
    def totalMoney(self, n: int) -> int:
        ans = 0
        start = 1
        end = 8
        sum = 28

        while n:
            if n >= 7:
                ans += sum
                sum = sum - start + end
                start += 1
                end += 1
                n -= 7
            else:
                while n:
                    ans += start
                    start += 1
                    n -= 1
        
        return ans
