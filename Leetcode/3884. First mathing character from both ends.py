class Solution:
    def firstMatchingIndex(self, s: str) -> int:
        i = 0
        j = len(s) - 1

        while i <= j:
            if s[i] == s[j]:
                return i
            i += 1
            j -= 1
        
        return -1
