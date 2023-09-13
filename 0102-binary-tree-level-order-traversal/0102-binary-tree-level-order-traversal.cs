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
    public IList<IList<int>> LevelOrder(TreeNode root) {
        
        
        
        IList<IList<int>> result = new List<IList<int>>();
        
        if(root == null)
            return result;
        
        Queue<TreeNode> q = new Queue<TreeNode>();
        
        q.Enqueue(root);
        
        while(q.Count>0)
        {
            int count = q.Count;
            IList<int> temp = new List<int>();
            
            for(int i=0; i<count; i++)
            {
                var node = q.Dequeue();
                
                temp.Add(node.val);
                
                if(node.left != null)
                    q.Enqueue(node.left);
                
                if(node.right != null)
                    q.Enqueue(node.right);
            }
            
            result.Add(temp);
            
        }
        
        return result;
        
        
    }
}