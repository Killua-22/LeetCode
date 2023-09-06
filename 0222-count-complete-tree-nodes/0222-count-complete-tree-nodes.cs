/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    
    
    public int CountNodes(TreeNode root) {
    
        if(root == null)
            return 0;
        
        int l = CountNodes(root.left);
        int r = CountNodes(root.right);
        
        return 1 + l + r;
        
    }
}