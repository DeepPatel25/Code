class Solution:
    def rotatedDigits(self, n: int) -> int:
        mapping = {
            "0": "0",
            "1": "1",
            "2": "5",
            "5": "2",
            "6": "9",
            "8": "8",
            "9": "6"
        }

        def good(s):
            sn = str(s)

            ans = []
            for c in sn:
                if c not in mapping:
                    return False
                ans.append(mapping[c])
            
            return sn != "".join(ans)

        count = 0
        for i in range(1, n + 1):
            if good(i):
                count += 1
        
        return count