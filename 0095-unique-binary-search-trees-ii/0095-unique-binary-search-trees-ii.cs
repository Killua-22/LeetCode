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
    public IList<TreeNode> GenerateTrees(int n) {
        
        return n>0 ? build(1, n) : new List<TreeNode>();
        
    }
    
    public List<TreeNode> build(int start, int end)
    {
        if(start > end)
            return new List<TreeNode> {null};
    
        List<TreeNode> allTrees = new List<TreeNode>();
        
        for(int i=start; i<=end; i++)
        {
            List<TreeNode> left = build(start, i-1);
            List<TreeNode> right = build(i+1, end);
            
            foreach(var l in left)
            {
                foreach(var r in right)
                {
                    TreeNode root = new TreeNode(i, l, r);
                    allTrees.Add(root);
                }
            }
        
        
        }
        
        return allTrees;
    
    }
}