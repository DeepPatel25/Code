class Solution:
    def sequentialDigits(self, low: int, high: int) -> List[int]:
        res = []

        for i in range(1, 10):
            s = ""
            for j in range(i, 10):
                s += str(j)
                t = int(s)

                if low <= t and t <= high:
                    res.append(t)
        
        res.sort()
        return res
