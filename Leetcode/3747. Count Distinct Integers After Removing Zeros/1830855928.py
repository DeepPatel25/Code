class Solution:
    def countDistinct(self, n: int) -> int:
        my_set = set()

        for i in range(1, n + 1):
            if "0" in str(i):
                new_num = int(str(i).replace("0", ""))
                my_set.add(new_num)
            else:
                my_set.add(i)

        return len(my_set)