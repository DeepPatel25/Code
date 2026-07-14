class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        n = len(s)
        cnt0, cnt1 = 0, = 0

        for i in s:
            if i == '1': cnt1 += 1
            else: cnt0 += 1
        
        ans = ""
        while cnt1 > 1:
            ans += "1"
            cnt1 -= 1
        
        while cnt0:
            ans += "0"
            cnt0 -= 1
        
        return ans + "1"
