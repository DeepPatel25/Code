class Solution:
    def countCoveredBuildings(self, n: int, buildings: List[List[int]]) -> int:
        n = len(buildings)
        xs = collections.defaultdict(list)
        ys = collections.defaultdict(list)

        for index, (x, y) in enumerate(buildings):
            xs[x].append((y, index))
            ys[y].append((x, index))

        up = [False] * n
        down = [False] * n
        left = [False] * n
        right = [False] * n

        for x in xs.keys():
            xs[x].sort()

            for i in range(1, len(xs[x])):
                left[xs[x][i][1]] = True
            
            for i in range(len(xs[x]) - 1):
                right[xs[x][i][1]] = True
        
        for y in ys.keys():
            ys[y].sort()

            for i in range(1, len(ys[y])):
                up[ys[y][i][1]] = True
            
            for i in range(len(ys[y]) - 1):
                down[ys[y][i][1]] = True
        
        count = 0
        for i in range(n):
            if up[i] and down[i] and left[i] and right[i]:
                count += 1
        
        return count