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
    public int PathSum(TreeNode root, int targetSum) {
        if(root == null)
            return 0;

        return CalculateSum(root, targetSum) + PathSum(root.left, targetSum) + PathSum(root.right, targetSum);
    }

    private int CalculateSum(TreeNode node, long targetSum)
    {
        if(node == null)
            return 0;
        
        return (node.val == targetSum ? 1 : 0) + CalculateSum(node.left, targetSum - node.val) + CalculateSum(node.right, targetSum - node.val);
    }
}