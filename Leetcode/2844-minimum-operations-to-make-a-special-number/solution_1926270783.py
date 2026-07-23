class Solution:
    def minimumOperations(self, s: str) -> int:
        min_operations = float('inf')
        c = list(s)

        for i in range(len(c) - 1, -1, -1):
            if c[i] == '5':
                for j in range(i - 1, -1, -1):
                    if c[j] == '2' or c[j] == '7':
                        f = i - j - 1
                        l = len(c) - 1 - i

                        min_operations = min(f + l, min_operations)
                        break
            if c[i] == '0':
                for j in range(i - 1, -1, -1):
                    if c[j] == '0' or c[j] == '5':
                        f = i - j - 1
                        l = len(c) - 1 - i

                        min_operations = min(f + l, min_operations)
                        break
        
        if min_operations == float('inf'):
            if '0' in s:
                return len(s) - 1
            else:
                return len(s)
        
        return min_operations