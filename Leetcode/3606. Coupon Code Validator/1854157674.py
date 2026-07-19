class Solution:
    def validateCoupons(self, code: List[str], businessLine: List[str], isActive: List[bool]) -> List[str]:
        data = defaultdict(list)
        blValid = ["electronics", "grocery", "pharmacy", "restaurant"]

        for i in range(len(isActive)):
            if isActive[i] and businessLine[i] in blValid and len(code[i]) > 0:
                a = True
                for ch in code[i]:
                    if ch.isalnum() or ch == '_':
                        continue
                    a = False
                    break
                
                if a:
                    data[businessLine[i]].append(code[i])
        
        results = []
        for key in sorted(data.keys()):
            data[key].sort()
            results.extend(data[key])

        return results