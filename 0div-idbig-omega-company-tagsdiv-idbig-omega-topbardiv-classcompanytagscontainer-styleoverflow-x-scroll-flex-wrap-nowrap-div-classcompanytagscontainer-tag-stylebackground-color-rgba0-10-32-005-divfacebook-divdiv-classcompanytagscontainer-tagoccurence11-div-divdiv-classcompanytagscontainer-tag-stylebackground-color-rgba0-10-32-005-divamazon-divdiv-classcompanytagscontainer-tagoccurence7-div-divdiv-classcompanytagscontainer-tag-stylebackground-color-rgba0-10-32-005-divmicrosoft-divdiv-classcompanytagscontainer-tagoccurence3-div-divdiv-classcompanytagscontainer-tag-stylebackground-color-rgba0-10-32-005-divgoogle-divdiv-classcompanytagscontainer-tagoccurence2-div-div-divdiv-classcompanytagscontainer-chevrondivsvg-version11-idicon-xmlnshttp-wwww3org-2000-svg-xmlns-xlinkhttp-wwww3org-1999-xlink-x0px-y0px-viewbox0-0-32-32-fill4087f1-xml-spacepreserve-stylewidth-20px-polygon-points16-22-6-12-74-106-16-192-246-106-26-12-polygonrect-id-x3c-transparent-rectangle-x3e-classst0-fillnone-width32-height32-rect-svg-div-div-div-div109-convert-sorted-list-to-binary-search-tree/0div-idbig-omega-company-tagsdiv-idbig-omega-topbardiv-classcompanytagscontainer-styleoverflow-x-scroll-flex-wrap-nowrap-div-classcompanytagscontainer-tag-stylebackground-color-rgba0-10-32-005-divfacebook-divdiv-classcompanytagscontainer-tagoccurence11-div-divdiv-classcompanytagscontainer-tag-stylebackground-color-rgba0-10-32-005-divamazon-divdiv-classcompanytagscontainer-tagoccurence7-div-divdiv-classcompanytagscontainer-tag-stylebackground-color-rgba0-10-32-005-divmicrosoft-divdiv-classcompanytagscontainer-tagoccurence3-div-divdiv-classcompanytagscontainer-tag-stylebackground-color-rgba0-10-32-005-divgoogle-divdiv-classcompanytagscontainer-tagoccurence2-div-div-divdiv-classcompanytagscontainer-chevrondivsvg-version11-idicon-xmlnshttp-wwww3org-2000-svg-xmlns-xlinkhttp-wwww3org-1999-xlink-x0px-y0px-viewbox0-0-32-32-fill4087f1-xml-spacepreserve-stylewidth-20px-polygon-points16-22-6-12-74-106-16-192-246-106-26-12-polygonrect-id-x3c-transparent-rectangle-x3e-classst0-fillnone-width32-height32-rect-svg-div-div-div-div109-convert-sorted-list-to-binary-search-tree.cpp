/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    
    void LLtovector(vector<int>& arr, ListNode* head)
    {
        if(head == NULL)
            return;
        
        arr.push_back(head->val);
        LLtovector(arr, head->next);
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> arr;
        
        LLtovector(arr, head);
        TreeNode* root = NULL;
        
        if(!arr.empty())
            root = makeBST(root, arr, 0, arr.size()-1);
        
        return root;
    }
    
    TreeNode* makeBST(TreeNode* root, vector<int> arr, int start, int finish)
    {
        if(start>finish) return NULL;
        int mid = start + (finish - start) / 2;
        
        root = new TreeNode(arr[mid]);
        root->left = makeBST(root->left, arr, start, mid-1);
        root->right = makeBST(root->right, arr, mid+1, finish);
        
        return root;
    }
};