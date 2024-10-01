class Solution {
public:

    void helper(int i, int sum, int& count, vector<int>& nums, int target) {
        if(i == nums.size())
        {
            if(sum == target)
                count++;
            return;
        }
        
        

        helper(i+1, sum+nums[i], count, nums, target);

        helper(i+1, sum-nums[i], count, nums, target);

    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int count = 0;
        
        helper(0, 0, count, nums, target);
        // helper(0, false, count, nums, target);
        return count;
    }
};