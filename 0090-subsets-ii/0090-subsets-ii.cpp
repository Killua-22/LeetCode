class Solution {
public:
    
    void helper(int index, vector<int>& nums, vector<int>& temp, vector<vector<int>>& res) {
        
        if(index == nums.size()) {
            
            if(find(res.begin(), res.end(), temp) == res.end()) {
                res.push_back(temp);
                
            }
            return;
        }
        
        temp.push_back(nums[index]);
        
        helper(index+1, nums, temp, res);
        
        temp.pop_back();
        
        helper(index+1, nums, temp, res);
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        vector<int> temp;
        
        helper(0, nums, temp, res);
        
        return res;
    }
};