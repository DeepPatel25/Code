# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def __init__(self):
        self.d = {}
    
    def rob_helper(self, root):
        if root == None:
            return [0, 0]
        
        left = self.rob_helper(root.left)
        right = self.rob_helper(root.right)

        res = []
        res.append(root.val + left[1] + right[1])
        res.append(max(left[0], left[1]) + max(right[0], right[1]))

        return res

    def rob(self, root: Optional[TreeNode]) -> int:
        return max(self.rob_helper(root))