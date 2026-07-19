class Solution(object):
    def checkRecord(self, s):
        """
        :type s: str
        :rtype: bool
        """
        
        if s.count('A')>=2 and s.count('L')>=3:
            return False
        return True