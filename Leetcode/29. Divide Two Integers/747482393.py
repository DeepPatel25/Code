class Solution(object):
    def divide(self, dividend, divisor):
        """
        :type dividend: int
        :type divisor: int
        :rtype: int
        """
        ans = dividend / divisor
        
        if ans >= 0:
            ans = math.floor(ans)
        else: 
            ans = math.ceil(ans)
            
        ans = int(ans)
        
        int_min = -2**31
        int_max = 2**31-1
        
        if ans > int_max: return int_max
        if ans < int_min: return int_min
        
        return ans 