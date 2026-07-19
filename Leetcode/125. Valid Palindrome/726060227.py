import re

class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        a = re.sub(r'[^a-z0-9]', '', s.lower())
        
        str1 = a[::-1]
        
        if str1==a:
            return True
        else: return False
        