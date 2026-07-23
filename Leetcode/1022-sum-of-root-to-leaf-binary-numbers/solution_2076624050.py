# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def sumRootToLeaf(self, root: Optional[TreeNode]) -> int:
        sum = 0
        
        def dfs(node, s):
            nonlocal sum
            
            s += str(node.val)
            if not node.left and not node.right:
                sum += int(s, 2)
                return
            
            if node.left:
                dfs(node.left, s)

            if node.right:
                dfs(node.right, s)

        dfs(root, "")
        return sum