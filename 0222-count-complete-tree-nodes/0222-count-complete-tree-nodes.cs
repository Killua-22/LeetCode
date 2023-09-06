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
    
    int Nodes(TreeNode root)
    {
        if(root == null)
            return 0;
        
        int l = Nodes(root.left);
        int r = Nodes(root.right);
        
        return 1 + l + r;
    }
    
    public int CountNodes(TreeNode root) {
    
        return Nodes(root);    
        
    }
}