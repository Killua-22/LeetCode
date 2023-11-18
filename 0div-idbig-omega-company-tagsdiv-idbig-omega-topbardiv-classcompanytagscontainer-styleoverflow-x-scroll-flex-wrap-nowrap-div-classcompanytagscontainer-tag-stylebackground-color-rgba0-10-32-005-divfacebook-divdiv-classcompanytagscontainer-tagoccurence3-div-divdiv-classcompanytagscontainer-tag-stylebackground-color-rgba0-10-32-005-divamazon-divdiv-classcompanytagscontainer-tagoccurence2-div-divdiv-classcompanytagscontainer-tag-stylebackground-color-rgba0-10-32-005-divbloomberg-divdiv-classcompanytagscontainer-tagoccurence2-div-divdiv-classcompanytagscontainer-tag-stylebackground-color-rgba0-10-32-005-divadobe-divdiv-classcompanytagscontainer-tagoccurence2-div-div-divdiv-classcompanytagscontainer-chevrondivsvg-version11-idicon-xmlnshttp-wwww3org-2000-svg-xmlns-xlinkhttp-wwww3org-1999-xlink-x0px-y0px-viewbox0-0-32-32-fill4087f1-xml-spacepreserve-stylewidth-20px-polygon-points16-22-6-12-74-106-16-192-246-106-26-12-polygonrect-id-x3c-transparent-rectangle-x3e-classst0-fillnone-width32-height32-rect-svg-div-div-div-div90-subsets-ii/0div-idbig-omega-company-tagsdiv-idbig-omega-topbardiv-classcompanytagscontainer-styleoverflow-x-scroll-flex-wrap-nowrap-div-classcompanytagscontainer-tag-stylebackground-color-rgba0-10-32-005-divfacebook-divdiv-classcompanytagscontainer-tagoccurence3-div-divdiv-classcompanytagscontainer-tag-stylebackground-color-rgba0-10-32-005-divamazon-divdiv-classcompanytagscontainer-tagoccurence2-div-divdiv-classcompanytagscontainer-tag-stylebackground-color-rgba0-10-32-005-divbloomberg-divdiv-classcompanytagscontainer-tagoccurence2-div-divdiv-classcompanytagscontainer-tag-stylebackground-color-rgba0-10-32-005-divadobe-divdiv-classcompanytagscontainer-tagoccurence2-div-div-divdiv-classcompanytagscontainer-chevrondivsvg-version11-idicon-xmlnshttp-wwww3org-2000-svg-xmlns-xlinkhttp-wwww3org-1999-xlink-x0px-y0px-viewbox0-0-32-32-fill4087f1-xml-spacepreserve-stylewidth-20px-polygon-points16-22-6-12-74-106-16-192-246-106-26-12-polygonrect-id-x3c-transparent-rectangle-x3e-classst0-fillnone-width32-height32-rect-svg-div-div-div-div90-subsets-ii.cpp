class Solution {
public:
    
    void helper(int index, vector<int> &nums, vector<vector<int>> &res, vector<int> &lst, int n)
    {
        if(index >= n)
        {
            if(find(res.begin(), res.end(), lst) == res.end())
                res.push_back(lst);
            return;
        }
        
        lst.push_back(nums[index]);
        helper(index+1, nums, res, lst, n);
        lst.pop_back();
        helper(index+1, nums, res, lst, n);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> lst;
        
        helper(0, nums, res, lst, n);
        return res;
    }
};