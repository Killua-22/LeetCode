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
    
    void dfs(TreeNode* root, string temp, vector<string>& res) {

        if(root->left == NULL && root->right == NULL)  
        {
            temp += to_string(root->val);
            res.push_back(temp);
            
            // temp.pop_back();
            return;
        }
        temp += to_string(root->val);
        temp += "->";
  
        if(root->left != NULL) dfs(root->left, temp, res);
        if(root->right != NULL) dfs(root->right, temp, res);
        
        
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string> res;
        string temp;
        
        dfs(root, temp, res);
        
        return res;
        
    }
};