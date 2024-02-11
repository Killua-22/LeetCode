class Solution {
public:
    
    void helper(int index, vector<int>& nums, vector<vector<int>>& res, vector<int>& temp) {
        
        if(index == nums.size()) {
            res.push_back(temp);
            return;
        }        
        
        temp.push_back(nums[index]);
        
        helper(index+1, nums, res, temp);
        
        temp.pop_back();
        
        helper(index+1, nums,res, temp);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> res;
        vector<int> temp;
        
        helper(0, nums, res, temp);
        
        return res;
        
    }
};