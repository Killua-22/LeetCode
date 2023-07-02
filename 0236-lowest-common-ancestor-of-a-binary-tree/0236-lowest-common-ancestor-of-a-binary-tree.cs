/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public TreeNode LowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        
        if(root == null)
            return null;

        if(root == p)
            return p;
        
        if(root == q)
            return q;

        TreeNode l = LowestCommonAncestor(root.left, p, q);
        TreeNode r = LowestCommonAncestor(root.right, p, q);

        if(l!=null && r!=null)
            return root;

        if(l!=null)
            return l;
        if(r!=null)
            return r;

        return null;

    }
}