class Solution(object):
    def multiply(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        out = 0
        app_zero = len(num2)-1
        for x in num2:
            temp=int(str(int(num1)*int(x)) + '0'*app_zero)
            out+=temp
            app_zero-=1


        return str(out)
        