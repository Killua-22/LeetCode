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
    
    public int GoodNodes(TreeNode root) {
        
        int ans = 0;
        int checkValue = int.MinValue;

        DFS(root, checkValue);
        return ans;

        void DFS(TreeNode node, int value)
        {
            if(node == null)
                return;
            
            if(node.val >= value)
            {
                ans++;
                value = node.val;
            }
                
            DFS(node.left, value);
            DFS(node.right, value);

        }

    }
}