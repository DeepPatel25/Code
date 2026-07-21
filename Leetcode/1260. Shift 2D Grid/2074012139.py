class Solution:
    def shiftGrid(self, grid: List[List[int]], k: int) -> List[List[int]]:
        rows, cols = len(grid), len(grid[0])
        matrix = [[0 for _ in range(cols)] for _ in range(rows)]

        k = k % (rows * cols)
        
        if k == 0:
            return grid
        
        temp = k
        x, y = 0, 0

        while temp:
            if x == 0 and y == 0:
                x, y = rows - 1, cols - 1
            elif y == 0:
                x, y = x - 1, cols - 1
            else:
                y -= 1
            temp -= 1
        
        for row in range(0, rows):
            for col in range(0, cols):
                matrix[row][col] = grid[x][y]

                if x == rows - 1 and y == cols - 1:
                    x, y = 0, 0
                elif y == cols - 1:
                    x, y = x + 1, 0
                else:
                    y += 1

        return matrix