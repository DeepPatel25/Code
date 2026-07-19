/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int maxDepth(TreeNode root) {
        int ans = Max(root, 1);
        return ans;
    }
    
    public int Max(TreeNode root, int n){
        if(root==null){
            return n-1;
        }
        
        return Math.max(Max(root.left, n+1), Max(root.right, n+1));
    }
}