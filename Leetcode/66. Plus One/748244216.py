class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        ans = ""
        for i in digits:
            ans += str(i)
            
        ans = str(int(ans) + 1)
        
        result = []
        
        for i in range(0,len(ans)):
            result.append(int(ans[i]))
            
        return result