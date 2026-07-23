class Solution(object):
    def findTheDifference(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        for i in range(0, len(t)):
            if t[i] not in s:
                return t[i]
            
        return ""