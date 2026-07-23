class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        a = ""
        for i in range(0, len(s)):
            if(s[i] >='0' and s[i]<='9'):
                a = a + s[i]
            elif (s[i]=='-'):
                a = a + s[i]
        
        return int(a)
        