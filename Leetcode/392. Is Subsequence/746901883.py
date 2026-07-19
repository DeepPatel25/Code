class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s)>len(t): return False
        if len(s)==0: return True
        
        count = 0
        
        for i in range(0,len(t)):
            if count<len(s) and s[count]==t[i]:
                count+=1
        
        return count==len(s)