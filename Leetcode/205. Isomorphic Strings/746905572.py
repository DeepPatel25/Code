class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        a = set(s)
        b = set(t)
        hm = {}
        
        if len(a) != len(b):      
            return False
        
        for i in range(len(s)):   
            if s[i] not in hm:
                hm[s[i]] = t[i]
            else:
                if hm[s[i]] == t[i]:
                    continue
                else:
                    return False
        return True