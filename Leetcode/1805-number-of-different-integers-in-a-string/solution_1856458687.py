class Solution:
    def numDifferentIntegers(self, word: str) -> int:
        s = ""
        for c in word:
            if c.isdigit():
                s += c
            else:
                s += " "
        
        return len(set(str(int(x)) for x in s.split() if x))