class Solution(object):
    def dayOfYear(self, date):
        """
        :type date: str
        :rtype: int
        """
        year, month, day = int(date[:4]), int(date[5:7]), int(date[-2:])
        ans=0
        leap=(year%4==0 and year%100!=0 or year%400==0) * 1
        
        for i in range(1, month):
            if i==2:
                ans += 28 + leap
            elif (i<8 and i%2==0) or (i>=8 and i%2!=0):
                ans += 30
            else:
                ans += 31
        
        return ans + day