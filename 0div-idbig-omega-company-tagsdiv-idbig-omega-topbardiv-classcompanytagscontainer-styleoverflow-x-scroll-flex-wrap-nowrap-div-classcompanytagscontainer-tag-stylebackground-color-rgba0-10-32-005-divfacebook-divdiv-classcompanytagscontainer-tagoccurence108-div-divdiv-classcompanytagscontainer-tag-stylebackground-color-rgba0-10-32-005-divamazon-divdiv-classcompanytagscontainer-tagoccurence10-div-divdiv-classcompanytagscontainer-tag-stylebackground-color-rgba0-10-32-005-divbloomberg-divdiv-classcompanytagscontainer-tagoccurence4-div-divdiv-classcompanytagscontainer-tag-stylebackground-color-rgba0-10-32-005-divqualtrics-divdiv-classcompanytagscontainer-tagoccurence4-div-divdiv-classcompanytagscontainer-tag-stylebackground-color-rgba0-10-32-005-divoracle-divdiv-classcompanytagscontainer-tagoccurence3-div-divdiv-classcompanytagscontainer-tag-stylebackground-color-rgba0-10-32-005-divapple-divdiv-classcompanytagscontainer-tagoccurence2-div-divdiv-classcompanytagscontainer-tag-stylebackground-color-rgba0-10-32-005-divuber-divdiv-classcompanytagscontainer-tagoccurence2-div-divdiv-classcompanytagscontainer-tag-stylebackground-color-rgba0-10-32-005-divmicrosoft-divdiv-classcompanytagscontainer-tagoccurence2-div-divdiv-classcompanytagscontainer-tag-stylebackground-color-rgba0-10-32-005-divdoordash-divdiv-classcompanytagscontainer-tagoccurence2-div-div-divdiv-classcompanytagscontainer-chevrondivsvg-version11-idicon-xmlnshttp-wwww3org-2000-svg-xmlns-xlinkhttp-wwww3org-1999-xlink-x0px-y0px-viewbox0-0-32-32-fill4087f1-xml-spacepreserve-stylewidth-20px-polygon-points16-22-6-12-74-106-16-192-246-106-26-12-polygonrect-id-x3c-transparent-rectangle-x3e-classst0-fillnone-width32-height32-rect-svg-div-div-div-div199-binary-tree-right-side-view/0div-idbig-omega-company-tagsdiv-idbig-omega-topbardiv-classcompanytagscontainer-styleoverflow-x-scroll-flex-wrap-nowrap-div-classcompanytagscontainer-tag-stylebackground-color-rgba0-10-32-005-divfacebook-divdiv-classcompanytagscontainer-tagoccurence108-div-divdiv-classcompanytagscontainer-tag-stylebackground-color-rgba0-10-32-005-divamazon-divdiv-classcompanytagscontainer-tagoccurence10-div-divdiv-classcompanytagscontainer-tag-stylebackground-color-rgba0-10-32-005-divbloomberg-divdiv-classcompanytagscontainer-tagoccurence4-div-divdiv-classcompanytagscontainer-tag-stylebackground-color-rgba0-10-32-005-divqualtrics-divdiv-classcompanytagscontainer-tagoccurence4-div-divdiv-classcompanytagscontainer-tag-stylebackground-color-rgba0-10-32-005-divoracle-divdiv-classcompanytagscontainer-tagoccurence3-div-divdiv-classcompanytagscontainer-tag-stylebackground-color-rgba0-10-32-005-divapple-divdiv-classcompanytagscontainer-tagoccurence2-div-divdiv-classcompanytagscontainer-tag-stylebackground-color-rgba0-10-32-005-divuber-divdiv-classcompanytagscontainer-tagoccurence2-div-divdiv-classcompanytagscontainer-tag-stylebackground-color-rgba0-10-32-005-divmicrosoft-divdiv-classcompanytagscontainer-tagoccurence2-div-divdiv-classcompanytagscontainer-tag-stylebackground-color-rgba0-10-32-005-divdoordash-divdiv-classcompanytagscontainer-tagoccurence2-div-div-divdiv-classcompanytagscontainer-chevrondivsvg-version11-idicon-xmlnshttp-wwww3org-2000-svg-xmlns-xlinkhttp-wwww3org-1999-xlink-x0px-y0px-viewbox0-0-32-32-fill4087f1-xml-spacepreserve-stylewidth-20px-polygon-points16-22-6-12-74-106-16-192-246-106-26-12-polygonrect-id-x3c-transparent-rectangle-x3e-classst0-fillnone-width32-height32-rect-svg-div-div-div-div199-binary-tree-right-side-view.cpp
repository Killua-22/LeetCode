/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> l;
    
    vector<int> rightSideView(TreeNode* root) {
        
        
        bfs(root, 0);
        return l;
    }
    
    void bfs(TreeNode* root, int level)
    {
        if(root == NULL)
            return;
        
        if(l.size() == level)
            l.push_back(root->val);
        
        bfs(root->right, level+1);
        bfs(root->left, level+1);
        
    }
};