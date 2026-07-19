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
    int sum = 0;
    public int sumNumbers(TreeNode root) {
        helper(root, "");
        return sum;
    }
    
    public void helper(TreeNode root, String a){
        if(root.left==null && root.right==null){
            sum += Integer.valueOf(a + root.val);
            return;
        }
        if(root.left!=null){
            helper(root.left, a + root.val);
        }
        if(root.right!=null){
            helper(root.right, a + root.val);
        }
    }
}