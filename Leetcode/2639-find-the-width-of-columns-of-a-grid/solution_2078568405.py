class Solution:
    def findColumnWidth(self, grid: List[List[int]]) -> List[int]:
        rows, cols = len(grid), len(grid[0])
        res = []

        for col in range(0, cols):
            maxi = 0
            for row in range(0, rows):
                maxi = max(maxi, len(str(grid[row][col])))
            
            res.append(maxi)
        
        return res