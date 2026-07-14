class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        res, cnt, helper = [], 0, []

        for i in nums:
            if i < pivot:
                res.append(i)
            elif i == pivot:
                cnt += 1
            else:
                helper.append(i)

        while cnt:
            res.append(pivot)
            cnt -= 1
        
        res += helper
        return res
