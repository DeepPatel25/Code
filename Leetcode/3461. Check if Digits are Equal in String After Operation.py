class Solution:
    def hasSameDigits(self, s: str) -> bool:
        while len(s) != 2:
            newS = ""
            for i in range(1, len(s)): newS += str((int(s[i]) + int(s[i - 1])) % 10)
            s = newS
        
        return s[0] == s[1]
