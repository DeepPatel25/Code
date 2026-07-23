class Solution:
    def sequentialDigits(self, low: int, high: int) -> List[int]:
        res = []
        while low <= high:
            s = str(low)
            isValid = True

            for i in range(0, len(s) - 1):
                if int(s[i + 1]) - int(s[i]) != 1:
                    isValid = False
                    break
            
            if isValid:
                res.append(low)
        
            low += 1
        return res