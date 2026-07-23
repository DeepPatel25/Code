class Solution(object):
    def convertToTitle(self, columnNumber):
        """
        :type columnNumber: int
        :rtype: str
        """
        li = [' ','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
        
        st = ""
        
        while(columnNumber>0):
            a = 26 if (columnNumber%26==0) else columnNumber%26
            st+= li[a]
            columnNumber = (columnNumber/26 - 1) if (columnNumber&26==0) else (columnNumber/26)
            
        return st
                