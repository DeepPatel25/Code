class Solution:
    def validStrings(self, n: int) -> List[str]:
        res = ["0", "1"]
        n -= 1

        while n:
            temp = []

            for r in res:
                if r[-1] == "1":
                    temp.append(r + "0")
                
                temp.append(r + "1")
            
            res = temp
            n -= 1
        
        res.sort()
        return res
