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
    
    void dfs(TreeNode root, int sum, List<int> pathSum)
    {
        if(root == null)
            return;
        
        sum += root.val;
        
        if(root.left == null && root.right == null)   
        {
            pathSum.Add(sum);
            return;
        }
            
        
        dfs(root.left, sum, pathSum);
        dfs(root.right, sum, pathSum);
    }
    
    public bool HasPathSum(TreeNode root, int targetSum) {
        
       List<int> sums = new List<int>();
        
       dfs(root, 0, sums);
        
    
       foreach(int x in sums)
       {
           if(x == targetSum)
               return true;
       }
        
        return false;

    }
}