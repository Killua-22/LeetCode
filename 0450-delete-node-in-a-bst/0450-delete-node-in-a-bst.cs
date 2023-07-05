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
    public TreeNode DeleteNode(TreeNode root, int key) {
        
        if(root == null)
            return root;

        if(key > root.val)
            root.right = DeleteNode(root.right, key);
        else if(key < root.val)
            root.left = DeleteNode(root.left, key);
        else
        {
            if(root.left == null && root.right == null)
                root = null;
            else if(root.left == null || root.right == null)
            {
                TreeNode ret = root.left != null ? root.left : root.right;
                root = ret;
            }
            else
            {
                TreeNode temp = root.right;
                while(temp.left!=null)
                    temp = temp.left;
                root.val = temp.val;
                root.right = DeleteNode(root.right, temp.val);
            }
        }
        return root;
        

        
    }
}