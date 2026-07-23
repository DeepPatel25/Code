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
    public int minDepth(TreeNode root) {
        if(root==null) return 0;
        int leftD = minDepth(root.left);
        int rightD = minDepth(root.right);
    
        if(leftD == 0 || rightD == 0){
            return Math.max(leftD, rightD)+1;
        }
    
        return Math.min(leftD, rightD)+1;
        }
}