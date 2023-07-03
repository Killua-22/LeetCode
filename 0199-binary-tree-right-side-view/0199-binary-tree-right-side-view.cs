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
    public IList<int> RightSideView(TreeNode root) {
        
        IList<int> l = new List<int>();

        BFS(root, 0);
        return l;

        void BFS(TreeNode node, int level)
        {
            if(node == null)
                return;
            
            if(l.Count == level)
                l.Add(node.val);

            BFS(node.right, level+1);
            BFS(node.left, level+1);

            
        }
        
        
        
    }
}