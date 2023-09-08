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
public class BSTIterator {
    Stack<TreeNode> _st = new Stack<TreeNode>();
    public BSTIterator(TreeNode root) {
        
        TreeNode iter = root;
        while(iter != null)
        {
            _st.Push(iter);
            iter = iter.left;
        }
    }
    
    public int Next() {
        
        TreeNode push = _st.Pop(), iter = push.right;
        
        while(iter != null)
        {
            _st.Push(iter);
            iter = iter.left;
        }
        
        return push.val;
        
    }
    
    public bool HasNext() {
        return _st.Count > 0;
    }
}

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator obj = new BSTIterator(root);
 * int param_1 = obj.Next();
 * bool param_2 = obj.HasNext();
 */