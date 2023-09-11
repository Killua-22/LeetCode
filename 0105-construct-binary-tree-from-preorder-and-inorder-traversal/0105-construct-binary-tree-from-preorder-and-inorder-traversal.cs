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
    
    int preInt = 0;
    
    public TreeNode BuildTree(int[] preorder, int[] inorder) {
        int len = preorder.Length - 1;
        TreeNode res = buildtree(preorder, inorder, 0, len);
        return res;
    }
    
    public TreeNode buildtree(int[] pre, int[] inr, int start, int end)
    {
        if(start > end)
            return null;
        
        TreeNode head = new TreeNode(pre[preInt++]);
        
        if(start == end)
            return head;
        
        int find = search(inr, start, end, head.val);
        
        head.left = buildtree(pre, inr, start, find -1);
        head.right = buildtree(pre, inr, find +1, end);
        
        return head;
        
    }
    
    public int search(int[] arr, int start, int end, int val)
    {
        int i;
        for(i = start; i < end; i++)
        {
            if(arr[i] == val)
                return i;
        }
        
        return i;
    }
    
}