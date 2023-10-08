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
    
    Dictionary<TreeNode, int> d = new();
    
    public int Rob(TreeNode root) {
        if(root == null)
            return 0;
        if(d.ContainsKey(root))
            return d[root];
        int dontRob = Rob(root.left) + Rob(root.right);
        int robRoot = root.val;
        if(root.left != null)
            robRoot += Rob(root.left.left) + Rob(root.left.right);
        if(root.right != null)
            robRoot += Rob(root.right.left) + Rob(root.right.right);
        
        return d[root] = Math.Max(dontRob, robRoot);
    }
    
}