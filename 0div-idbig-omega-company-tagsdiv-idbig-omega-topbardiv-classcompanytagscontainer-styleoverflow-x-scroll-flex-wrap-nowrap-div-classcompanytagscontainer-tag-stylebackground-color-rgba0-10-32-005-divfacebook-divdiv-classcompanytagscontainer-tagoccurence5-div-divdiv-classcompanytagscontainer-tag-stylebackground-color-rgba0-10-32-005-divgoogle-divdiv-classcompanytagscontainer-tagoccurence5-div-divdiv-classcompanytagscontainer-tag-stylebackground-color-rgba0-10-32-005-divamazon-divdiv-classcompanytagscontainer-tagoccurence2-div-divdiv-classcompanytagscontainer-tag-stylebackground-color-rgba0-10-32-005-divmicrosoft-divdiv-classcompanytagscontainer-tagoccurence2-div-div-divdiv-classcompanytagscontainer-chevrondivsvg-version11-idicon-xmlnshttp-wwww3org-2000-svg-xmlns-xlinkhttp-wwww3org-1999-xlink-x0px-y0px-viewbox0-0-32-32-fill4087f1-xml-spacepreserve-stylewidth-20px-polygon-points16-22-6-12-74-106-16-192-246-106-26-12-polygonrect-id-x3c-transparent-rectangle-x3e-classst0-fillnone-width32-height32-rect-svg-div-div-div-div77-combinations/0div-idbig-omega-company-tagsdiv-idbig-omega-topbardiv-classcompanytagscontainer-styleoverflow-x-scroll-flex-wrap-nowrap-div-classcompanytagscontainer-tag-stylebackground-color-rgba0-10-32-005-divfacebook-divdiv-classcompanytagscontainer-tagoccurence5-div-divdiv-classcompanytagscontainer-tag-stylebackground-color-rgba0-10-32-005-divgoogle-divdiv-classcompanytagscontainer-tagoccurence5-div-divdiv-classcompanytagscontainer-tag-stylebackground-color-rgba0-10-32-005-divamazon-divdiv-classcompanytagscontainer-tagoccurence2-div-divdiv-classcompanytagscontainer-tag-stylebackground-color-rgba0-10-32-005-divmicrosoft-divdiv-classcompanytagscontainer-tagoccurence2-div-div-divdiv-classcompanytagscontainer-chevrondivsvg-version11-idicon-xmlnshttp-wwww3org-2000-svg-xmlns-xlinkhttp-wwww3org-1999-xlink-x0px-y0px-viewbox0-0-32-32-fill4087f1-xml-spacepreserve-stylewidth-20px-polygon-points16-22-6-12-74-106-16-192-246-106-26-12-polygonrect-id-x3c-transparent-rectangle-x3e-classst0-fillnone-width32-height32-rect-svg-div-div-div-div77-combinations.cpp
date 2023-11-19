class Solution {
public:
    
    void helper(int index, vector<int> &nums, vector<int> &lst, vector<vector<int>> &res, int n, int k)
    {
        
        
        if(lst.size() == k)
        {
            res.push_back(lst);
            return;
        }
        
        for (int i = index; i < nums.size(); i++) 
        {
            lst.push_back(nums[i]);
            helper(i + 1, nums, lst, res, n, k);
            lst.pop_back();
        }
            
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums;
        
        for(int i=1; i<=n; i++)
        {
            nums.push_back(i);
        }
        vector<int> lst;
        vector<vector<int>> res;
        helper(0, nums, lst, res, n, k);
        
        return res;
    }
};