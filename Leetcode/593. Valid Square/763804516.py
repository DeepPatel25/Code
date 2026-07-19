class Solution(object):
    def validSquare(self, p1, p2, p3, p4):
        """
        :type p1: List[int]
        :type p2: List[int]
        :type p3: List[int]
        :type p4: List[int]
        :rtype: bool
        """
        def cal(p1, p2):
            return abs(p1[0]-p2[0]) + abs(p1[1]-p2[1])
        
        d = [cal(p1, p2), cal(p1, p3), cal(p1, p4), cal(p2, p3), cal(p2, p4), cal(p3, p4)]
        d.sort()
        
        return 0 < d[0] == d[1] == d[2] == d[3] and d[4] == d[5]