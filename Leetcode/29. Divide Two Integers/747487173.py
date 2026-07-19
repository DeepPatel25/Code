class Solution(object):
    def divide(self, dividend, divisor):
        """
        :type dividend: int
        :type divisor: int
        :rtype: int
        """
        sign = 1
        if (dividend>0 and divisor<0) or (dividend<0 and divisor>0): sign = -1
        
        dividend = abs(dividend)
        divisor = abs(divisor)
        
        ans = int(math.floor(dividend / divisor))
        ans *= sign
        
        int_min = -2**31
        int_max = 2**31-1
        
        if ans > int_max: return int_max
        if ans < int_min: return int_min
        
        return ans 