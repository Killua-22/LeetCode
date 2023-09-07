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
    
    void Path(TreeNode root,int num, List<int> paths)
    {
        if(root == null)
            return;
        
        num += root.val;
        
        if(root.left == null && root.right == null)
        {
            paths.Add(num);
            return;
        }
            
        
        num = num*10;
        
        Path(root.left, num, paths);
        Path(root.right, num, paths);
        
        
    }
    
    public int SumNumbers(TreeNode root) {
        
        List<int> nums = new List<int>();
        
        Path(root, 0, nums);
        
        int sum = 0;
        
        foreach(var x in nums)
        {
            sum += x;
        }
        
        return sum;
        
    }
}