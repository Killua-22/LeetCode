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
    
    public int GetMinimumDifference(TreeNode root) {
        
       var values = new List<int>();
        DFS(root);
        
        int min = int.MaxValue;
        
        for(int i=1; i<values.Count; i++)
        {
            min = Math.Min(min, values[i] - values[i-1]);
        }
        
        return min;
        
        void DFS(TreeNode root)
        {
            if(root == null)
                return;
            
            DFS(root.left);
            values.Add(root.val);
            DFS(root.right);
        }
    }
}