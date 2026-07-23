class Solution(object):
    def checkRecord(self, s):
        """
        :type s: str
        :rtype: bool
        """
        
        absent=0
        late=0

        for ch in s:
            if ch=="L":
                late+=1
            else:
                late=0
            if ch=="A":
                absent+=1

            if absent==2 or late==3:
                return False
        return True