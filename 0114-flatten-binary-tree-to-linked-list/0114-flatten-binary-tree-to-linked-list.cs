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
    
    void preorder(TreeNode root, List<TreeNode> l)
    {
        
        if(root == null)
            return;
        
        l.Add(root);
        
        preorder(root.left, l);
        preorder(root.right, l);
    }
    
    public void Flatten(TreeNode root) {
        
        List<TreeNode> pre = new List<TreeNode>();
        
        preorder(root, pre);
        
        TreeNode curr = root;
        for(int i=1; i<pre.Count; i++)
        {
            curr.left = null;
            curr.right = pre[i];
            curr = curr.right; 
        }
        
        
        
    }
}