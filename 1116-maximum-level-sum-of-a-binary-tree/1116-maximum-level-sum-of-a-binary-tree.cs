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
    public int MaxLevelSum(TreeNode root) {
        int level = 0, max = Int32.MinValue, count = 0;
        Queue<TreeNode> q = new Queue<TreeNode>();

        q.Enqueue(root);

        while(q.Count > 0){
            count++;
            int sum = 0; 
            int c = q.Count;
            for(int i=0; i<c; i++)
            {
                var n = q.Dequeue();
                sum+=n.val;
                if(n.left!=null) q.Enqueue(n.left);
                if(n.right!=null) q.Enqueue(n.right);
            }
            if(max<sum)
                (max, level) = (sum, count);
        }

        return level;
        
    }
}