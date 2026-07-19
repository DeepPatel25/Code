import collections
from typing import List

class Solution:
    def countCoveredBuildings(self, n: int, buildings: List[List[int]]) -> int:
        n = len(buildings)
        xs = collections.defaultdict(list)
        ys = collections.defaultdict(list)

        # Group buildings by x and y
        for idx, (x, y) in enumerate(buildings):
            xs[x].append((y, idx))
            ys[y].append((x, idx))

        up = [False] * n
        down = [False] * n
        left = [False] * n
        right = [False] * n

        # Process vertical direction (same x → sort by y)
        for x_val, arr in xs.items():
            arr.sort()  # sort by y

            # All except first have building on left
            for y, idx in arr[1:]:
                left[idx] = True

            # All except last have building on right
            for y, idx in arr[:-1]:
                right[idx] = True

        # Process horizontal direction (same y → sort by x)
        for y_val, arr in ys.items():
            arr.sort()  # sort by x

            # All except first have building below (down)
            for x, idx in arr[1:]:
                up[idx] = True

            # All except last have building above (up)
            for x, idx in arr[:-1]:
                down[idx] = True

        # Count buildings with all four directions covered
        return sum(up[i] and down[i] and left[i] and right[i] for i in range(n))
