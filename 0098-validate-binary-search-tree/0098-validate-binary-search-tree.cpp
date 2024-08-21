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

    int maxValue(TreeNode* root) {
        if(root == NULL)
            return INT_MIN;
        return max({root->val, maxValue(root->left), maxValue(root->right)});
    }

    int minValue(TreeNode* root) {
        if(root == NULL)
            return INT_MAX;
        return min({root->val, minValue(root->left), minValue(root->right)});
    }

    bool isValidBST(TreeNode* root) {
        if(root == NULL)
            return true;

        if(root->left != NULL && maxValue(root->left) >= root->val)
            return false;
        
        if(root->right != NULL && minValue(root->right) <= root->val)
            return false;

        if(!isValidBST(root->left) || !isValidBST(root->right))
            return false;

        
        return true;
    }
};

// auto init = [] () {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     return 'c';
// };