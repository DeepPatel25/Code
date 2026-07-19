class Solution:
    def lastInteger(self, n: int) -> int:
        h = 1
        s = 1
        count = n
        left = True

        while count > 1:
            if not left and count % 2 == 0:
                h += s

            count = (count + 1) // 2
            s *= 2
            left = not left

        return h