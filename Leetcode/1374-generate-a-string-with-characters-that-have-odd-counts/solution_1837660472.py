class Solution:
    def generateTheString(self, n: int) -> str:
        s = ""
        if n % 2 == 0:
            s = "a" * (n - 1)
            s += "b"
        else:
            s = "a" * n
        
        return s