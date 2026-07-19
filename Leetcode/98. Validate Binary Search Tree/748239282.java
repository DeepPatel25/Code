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
    public boolean isValidBST(TreeNode root) {
        return validBst(root, Integer.MIN_VALUE, Integer.MAX_VALUE);
    }
    
    public boolean validBst(TreeNode root, int a, int b){
        if(root==null) return true;
        if(root.val<=a || root.val>=b) return false;
        
        return validBst(root.left, a, root.val) && validBst(root.right, root.val, b);
    }
}