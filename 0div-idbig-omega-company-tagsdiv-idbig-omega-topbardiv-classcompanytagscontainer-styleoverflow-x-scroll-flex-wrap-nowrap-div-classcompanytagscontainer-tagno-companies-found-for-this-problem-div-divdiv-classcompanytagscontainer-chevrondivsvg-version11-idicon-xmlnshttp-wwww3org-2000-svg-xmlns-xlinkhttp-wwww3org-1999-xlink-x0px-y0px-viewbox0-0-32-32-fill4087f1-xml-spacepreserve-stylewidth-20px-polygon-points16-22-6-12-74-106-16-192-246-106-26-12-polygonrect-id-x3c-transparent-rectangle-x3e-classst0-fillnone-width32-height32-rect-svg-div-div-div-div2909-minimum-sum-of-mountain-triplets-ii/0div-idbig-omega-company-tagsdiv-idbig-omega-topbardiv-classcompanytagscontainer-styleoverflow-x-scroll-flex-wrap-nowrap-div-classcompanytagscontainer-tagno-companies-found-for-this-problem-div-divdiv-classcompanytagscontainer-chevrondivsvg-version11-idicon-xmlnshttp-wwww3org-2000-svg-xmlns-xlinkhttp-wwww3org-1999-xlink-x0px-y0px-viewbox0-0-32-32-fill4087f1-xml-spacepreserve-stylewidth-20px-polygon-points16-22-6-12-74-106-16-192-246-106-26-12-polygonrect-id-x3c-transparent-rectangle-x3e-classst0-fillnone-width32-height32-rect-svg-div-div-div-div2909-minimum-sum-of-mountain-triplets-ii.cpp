class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int ans = INT_MAX;
        vector<int> rightsmallest(nums.size(), nums.back());
        
        for(int i=nums.size()-2; i>=0; i--)
            rightsmallest[i] = min(rightsmallest[i+1], nums[i]);
        
        int leftsmallest = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            if(leftsmallest < nums[i] && rightsmallest[i] < nums[i])
                ans = min(ans, nums[i] + leftsmallest + rightsmallest[i]);
            leftsmallest = min(leftsmallest, nums[i]);
        }
        
        if(ans == INT_MAX)
            return -1;
        return ans;
            
            
        
    }
};