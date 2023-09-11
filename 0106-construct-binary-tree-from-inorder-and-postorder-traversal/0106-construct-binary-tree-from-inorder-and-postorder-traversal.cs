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

public class Index
{
    public int index;
}

public class Solution {
    
    
    
    public TreeNode BuildTree(int[] inorder, int[] postorder) {
        int len = inorder.Length -1;
        Index posInt = new Index();
        posInt.index = len;
        TreeNode res = buildTree(inorder, postorder, 0, len, posInt);
        return res;
    }
    
    public TreeNode buildTree(int[] inorder, int[] postorder, int start, int end, Index postInt)
    {
        if(start > end)
            return null;
        
        TreeNode head = new TreeNode(postorder[postInt.index]);
        (postInt.index)--;
        
        if(start == end)
            return head;
        
        int find = search(inorder, start, end , head.val);
        
        head.right = buildTree(inorder, postorder, find+1, end, postInt);
        head.left = buildTree(inorder, postorder, start, find-1, postInt);
        
        
        return head;
        
    }
    
    public int search(int[] arr, int start, int end, int val)
    {
        int i;
        for(i = start; i<end; i++)
        {
            if(arr[i] == val)
                return i;
        }
        return i;
    }
}