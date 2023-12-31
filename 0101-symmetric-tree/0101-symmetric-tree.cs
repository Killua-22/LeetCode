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
    public bool IsSymmetric(TreeNode root) {
        
       if(root == null)
           return true;
        
        return IsMirror(root.left, root.right);
    
    }
    
    bool IsMirror(TreeNode p, TreeNode q)
    {
        if(p == null && q == null)
            return true;
        
        if(p == null || q == null)
            return false;
        
        return p.val == q.val && IsMirror(p.left, q.right) &&  IsMirror(p.right, q.left);
    }
                 
}