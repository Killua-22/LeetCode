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

    
    public IList<double> AverageOfLevels(TreeNode root) {
        IList<double> resultList = new List<double>();
        Queue<TreeNode> q = new Queue<TreeNode>();
        q.Enqueue(root);
        
        while(q.Count>0)
        {
            int count = q.Count;
            double sum = 0;
            
            for(int i=0; i<count; i++)
            {
                var node = q.Dequeue();
                sum += node.val;
                
                if(node.left != null)
                    q.Enqueue(node.left);
                
                if(node.right != null)
                    q.Enqueue(node.right);
                
            }
            
            resultList.Add(sum/count);
        }
        
        return resultList;
    }
}