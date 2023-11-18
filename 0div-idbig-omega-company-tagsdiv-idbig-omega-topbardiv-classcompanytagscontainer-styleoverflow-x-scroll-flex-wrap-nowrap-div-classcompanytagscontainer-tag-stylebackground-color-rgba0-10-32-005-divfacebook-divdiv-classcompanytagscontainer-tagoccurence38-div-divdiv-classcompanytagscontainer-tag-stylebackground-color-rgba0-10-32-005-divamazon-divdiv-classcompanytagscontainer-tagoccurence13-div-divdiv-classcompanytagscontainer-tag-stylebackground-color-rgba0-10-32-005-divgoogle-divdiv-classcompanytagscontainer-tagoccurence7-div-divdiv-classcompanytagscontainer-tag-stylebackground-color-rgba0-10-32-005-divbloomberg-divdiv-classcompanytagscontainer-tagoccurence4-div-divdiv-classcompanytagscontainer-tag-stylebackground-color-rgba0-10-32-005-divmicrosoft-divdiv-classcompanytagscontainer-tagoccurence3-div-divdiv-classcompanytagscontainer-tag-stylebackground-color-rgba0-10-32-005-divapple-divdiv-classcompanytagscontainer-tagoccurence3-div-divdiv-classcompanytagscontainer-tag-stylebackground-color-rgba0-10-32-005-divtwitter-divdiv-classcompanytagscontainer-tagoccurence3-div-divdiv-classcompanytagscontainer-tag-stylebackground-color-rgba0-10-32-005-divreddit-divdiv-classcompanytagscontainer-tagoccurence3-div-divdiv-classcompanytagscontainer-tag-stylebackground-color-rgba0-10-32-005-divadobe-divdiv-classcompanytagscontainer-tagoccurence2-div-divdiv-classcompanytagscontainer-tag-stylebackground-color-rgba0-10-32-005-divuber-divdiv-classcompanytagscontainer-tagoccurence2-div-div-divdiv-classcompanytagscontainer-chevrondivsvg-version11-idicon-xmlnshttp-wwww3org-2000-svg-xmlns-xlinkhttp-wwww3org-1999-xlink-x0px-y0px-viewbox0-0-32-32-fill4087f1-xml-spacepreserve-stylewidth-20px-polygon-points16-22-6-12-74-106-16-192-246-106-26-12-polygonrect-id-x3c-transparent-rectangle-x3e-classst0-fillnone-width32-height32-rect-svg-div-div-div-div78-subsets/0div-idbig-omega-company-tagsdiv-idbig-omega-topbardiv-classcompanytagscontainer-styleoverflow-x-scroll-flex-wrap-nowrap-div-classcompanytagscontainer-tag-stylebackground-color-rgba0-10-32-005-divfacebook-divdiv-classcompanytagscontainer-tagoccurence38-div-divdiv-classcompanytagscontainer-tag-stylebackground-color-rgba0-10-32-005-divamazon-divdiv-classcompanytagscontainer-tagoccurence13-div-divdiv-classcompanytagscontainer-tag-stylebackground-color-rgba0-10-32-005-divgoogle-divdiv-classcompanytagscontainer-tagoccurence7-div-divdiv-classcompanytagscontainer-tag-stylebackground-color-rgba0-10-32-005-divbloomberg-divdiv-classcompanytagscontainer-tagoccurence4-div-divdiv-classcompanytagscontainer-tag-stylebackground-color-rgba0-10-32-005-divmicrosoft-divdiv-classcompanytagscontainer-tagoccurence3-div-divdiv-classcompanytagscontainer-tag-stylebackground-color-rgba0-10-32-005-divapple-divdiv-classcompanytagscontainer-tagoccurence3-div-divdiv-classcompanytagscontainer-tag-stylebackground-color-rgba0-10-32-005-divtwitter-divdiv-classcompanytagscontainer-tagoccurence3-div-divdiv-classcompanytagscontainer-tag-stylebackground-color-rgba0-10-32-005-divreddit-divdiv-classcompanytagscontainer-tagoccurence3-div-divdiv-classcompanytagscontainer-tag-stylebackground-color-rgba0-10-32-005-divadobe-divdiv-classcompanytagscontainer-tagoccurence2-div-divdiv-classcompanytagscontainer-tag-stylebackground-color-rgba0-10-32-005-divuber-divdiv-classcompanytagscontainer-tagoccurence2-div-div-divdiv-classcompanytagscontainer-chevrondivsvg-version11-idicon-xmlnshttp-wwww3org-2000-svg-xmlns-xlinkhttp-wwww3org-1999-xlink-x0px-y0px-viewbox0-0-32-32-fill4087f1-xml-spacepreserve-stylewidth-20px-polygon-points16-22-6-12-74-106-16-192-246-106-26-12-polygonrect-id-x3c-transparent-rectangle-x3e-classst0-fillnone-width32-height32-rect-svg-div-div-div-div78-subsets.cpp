class Solution {
public:
    
    void helper(int index, vector<int> lst, vector<vector<int>> &res, vector<int> &nums, int n)
    {
        if(index >= n)
        {
            res.push_back(lst);
            return;
        }
        
        lst.push_back(nums[index]);
        helper(index+1, lst, res, nums, n);
        lst.pop_back();
        helper(index+1, lst, res, nums, n);
    }    
        
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> lst;
        int n = nums.size();
        
        helper(0, lst, res, nums, n);
        
        return res;
        
        
    }
};