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

    public void DFS(TreeNode node, List<int> values)
    {
        if(node == null)
            return; 
        
        if(node.left == null && node.right == null)
            values.Add(node.val);
        
        DFS(node.left, values);
        DFS(node.right, values);
    }

    public bool LeafSimilar(TreeNode root1, TreeNode root2) {
        List<int> first = new List<int>();
        List<int> second = new List<int>();
    
        DFS(root1, first);
        DFS(root2, second);

        return first.SequenceEqual(second);
        

        

        

        
    }
}