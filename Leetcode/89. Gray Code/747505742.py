class Solution(object):
    def grayCode(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        
        l = ['0','1']
        if n==0:
            return [0,1]
        
        for i in range(2,n+1):
            l0 = l
            l1 = l[::-1]
            
            for i in range(len(l0)):
                l0[i] = '0' + l0[i]
            for i in range(len(l1)):
                l1[i] = '1' + l1[i]
                
            l = l0 + l1
        
        ans = []
        
        for i in l:
            ans.append(int(i,2))
        
        return ans