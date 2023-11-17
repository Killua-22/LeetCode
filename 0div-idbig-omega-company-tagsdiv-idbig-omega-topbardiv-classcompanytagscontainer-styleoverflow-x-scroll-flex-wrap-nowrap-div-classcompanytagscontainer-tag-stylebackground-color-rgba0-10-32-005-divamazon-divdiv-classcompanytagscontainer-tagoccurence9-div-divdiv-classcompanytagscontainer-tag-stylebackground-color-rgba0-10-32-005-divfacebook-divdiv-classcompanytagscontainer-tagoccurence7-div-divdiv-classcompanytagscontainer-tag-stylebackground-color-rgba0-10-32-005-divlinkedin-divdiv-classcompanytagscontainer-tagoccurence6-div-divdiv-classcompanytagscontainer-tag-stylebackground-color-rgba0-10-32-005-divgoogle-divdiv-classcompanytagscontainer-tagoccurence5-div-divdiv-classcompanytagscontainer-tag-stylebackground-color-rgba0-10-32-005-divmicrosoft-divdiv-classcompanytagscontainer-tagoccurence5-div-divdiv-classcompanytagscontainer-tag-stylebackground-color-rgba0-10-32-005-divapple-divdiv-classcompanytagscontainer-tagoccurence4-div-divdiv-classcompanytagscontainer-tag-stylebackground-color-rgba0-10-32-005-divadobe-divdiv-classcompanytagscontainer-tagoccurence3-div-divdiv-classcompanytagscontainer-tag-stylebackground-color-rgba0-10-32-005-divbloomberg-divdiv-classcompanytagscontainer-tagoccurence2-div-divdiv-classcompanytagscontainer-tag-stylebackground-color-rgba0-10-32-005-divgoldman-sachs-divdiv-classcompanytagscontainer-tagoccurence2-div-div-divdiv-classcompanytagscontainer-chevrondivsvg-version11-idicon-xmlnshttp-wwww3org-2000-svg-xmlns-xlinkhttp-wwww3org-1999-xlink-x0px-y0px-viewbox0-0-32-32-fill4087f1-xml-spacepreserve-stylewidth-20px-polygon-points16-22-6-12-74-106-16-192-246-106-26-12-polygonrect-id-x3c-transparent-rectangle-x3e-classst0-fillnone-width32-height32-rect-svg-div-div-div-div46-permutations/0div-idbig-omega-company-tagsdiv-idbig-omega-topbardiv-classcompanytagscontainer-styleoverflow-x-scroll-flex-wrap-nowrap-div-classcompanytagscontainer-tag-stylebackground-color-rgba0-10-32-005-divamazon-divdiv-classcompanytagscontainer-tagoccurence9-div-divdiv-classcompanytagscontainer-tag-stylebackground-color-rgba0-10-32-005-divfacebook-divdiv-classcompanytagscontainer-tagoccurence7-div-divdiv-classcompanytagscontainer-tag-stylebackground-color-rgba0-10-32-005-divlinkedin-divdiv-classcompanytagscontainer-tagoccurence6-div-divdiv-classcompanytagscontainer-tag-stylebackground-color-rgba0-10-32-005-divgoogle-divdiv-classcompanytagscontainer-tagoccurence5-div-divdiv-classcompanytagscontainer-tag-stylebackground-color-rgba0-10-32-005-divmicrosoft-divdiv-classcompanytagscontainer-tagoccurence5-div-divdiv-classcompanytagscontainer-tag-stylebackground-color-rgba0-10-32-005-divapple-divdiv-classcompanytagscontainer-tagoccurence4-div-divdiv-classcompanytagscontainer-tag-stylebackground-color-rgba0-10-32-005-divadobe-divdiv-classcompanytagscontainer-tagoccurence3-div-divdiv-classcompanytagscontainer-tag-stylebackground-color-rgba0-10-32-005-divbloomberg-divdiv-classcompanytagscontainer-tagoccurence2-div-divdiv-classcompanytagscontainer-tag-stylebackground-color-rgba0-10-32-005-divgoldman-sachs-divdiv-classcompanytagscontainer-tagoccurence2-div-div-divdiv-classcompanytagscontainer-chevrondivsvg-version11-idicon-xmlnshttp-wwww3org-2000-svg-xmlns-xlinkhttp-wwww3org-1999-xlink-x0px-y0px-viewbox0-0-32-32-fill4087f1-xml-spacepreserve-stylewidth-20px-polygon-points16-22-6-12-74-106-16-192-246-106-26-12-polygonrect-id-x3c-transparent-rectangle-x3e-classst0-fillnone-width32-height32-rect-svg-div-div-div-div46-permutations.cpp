class Solution {
public:
    
    void helper(int index, vector<int> &nums, int n, vector<vector<int>> &ans)
    {
        if(index == n){
            ans.push_back(nums);
        }
            
        
        for(int i=index; i<n; i++)
        {
            swap(nums[i], nums[index]);
            helper(index+1, nums, n, ans);
            swap(nums[i], nums[index]);
        }
        
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        
        vector<vector<int>> ans;
        helper(0, nums, n, ans);
        
        return ans;
    }
};