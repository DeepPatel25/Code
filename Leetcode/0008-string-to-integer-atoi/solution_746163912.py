class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        number, sign = 0, 1
        s = s.lstrip()
        if not s : return 0
        
        if s[0]=='-':
            s=s[1:]
            sign=-1
        elif s[0]=='+':
            s=s[1:]
            
        
        for i in range(len(s)):
            if s[i] in "0123456789":
                number = number * 10 + int(s[i])
            else:
                break
        
        if number == 0 :
            return 0
        
        number*=sign
        int32_min, int32_max = -2**31, 2**31-1
        
        if number>int32_max : return int32_max
        if number<int32_min : return int32_min
        
        return number