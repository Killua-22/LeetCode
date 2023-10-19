# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class BSTIterator:
    
    stack = []
    
    def __init__(self, root: Optional[TreeNode]):
        iter = root
        while(iter != None):
            self.stack.append(iter)
            iter = iter.left

    def next(self) -> int:
        push = self.stack.pop()
        iter = push.right
        
        while(iter != None):
            self.stack.append(iter)
            iter = iter.left
        
        return push.val

    def hasNext(self) -> bool:
        return len(self.stack) > 0


# Your BSTIterator object will be instantiated and called as such:
# obj = BSTIterator(root)
# param_1 = obj.next()
# param_2 = obj.hasNext()