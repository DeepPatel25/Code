from collections import defaultdict
import itertools

class Solution:
    def pyramidTransition(self, bottom: str, allowed: List[str]) -> bool:
        T = defaultdict(list)
        for triple in allowed:
            T[(triple[0], triple[1])].append(triple[2])
        
        memo = {}

        def solve(row):
            if len(row) == 1:
                return True
            if row in memo:
                return memo[row]
            
            options = []
            for i in range(len(row) - 1):
                key = (row[i], row[i + 1])
                if key in T:
                    options.append(T[key])
                else:
                    memo[row] = False
                    return False
            
            for next_row in itertools.product(*options):
                if solve("".join(next_row)):
                    memo[row] = True
                    return True
            
            memo[row] = False
            return False
        
        return solve(bottom)