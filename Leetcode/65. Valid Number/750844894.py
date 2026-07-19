class Solution(object):
    def isNumber(self, s):
        """
        :type s: str
        :rtype: bool
        """
        
        if s == "inf" or s == "-inf" or s == "+inf" or s == "Infinity" or s == "-Infinity" or s == "+Infinity":
            return False
        
        try:
            float(s)
            return True
        except (Exception):
            return False