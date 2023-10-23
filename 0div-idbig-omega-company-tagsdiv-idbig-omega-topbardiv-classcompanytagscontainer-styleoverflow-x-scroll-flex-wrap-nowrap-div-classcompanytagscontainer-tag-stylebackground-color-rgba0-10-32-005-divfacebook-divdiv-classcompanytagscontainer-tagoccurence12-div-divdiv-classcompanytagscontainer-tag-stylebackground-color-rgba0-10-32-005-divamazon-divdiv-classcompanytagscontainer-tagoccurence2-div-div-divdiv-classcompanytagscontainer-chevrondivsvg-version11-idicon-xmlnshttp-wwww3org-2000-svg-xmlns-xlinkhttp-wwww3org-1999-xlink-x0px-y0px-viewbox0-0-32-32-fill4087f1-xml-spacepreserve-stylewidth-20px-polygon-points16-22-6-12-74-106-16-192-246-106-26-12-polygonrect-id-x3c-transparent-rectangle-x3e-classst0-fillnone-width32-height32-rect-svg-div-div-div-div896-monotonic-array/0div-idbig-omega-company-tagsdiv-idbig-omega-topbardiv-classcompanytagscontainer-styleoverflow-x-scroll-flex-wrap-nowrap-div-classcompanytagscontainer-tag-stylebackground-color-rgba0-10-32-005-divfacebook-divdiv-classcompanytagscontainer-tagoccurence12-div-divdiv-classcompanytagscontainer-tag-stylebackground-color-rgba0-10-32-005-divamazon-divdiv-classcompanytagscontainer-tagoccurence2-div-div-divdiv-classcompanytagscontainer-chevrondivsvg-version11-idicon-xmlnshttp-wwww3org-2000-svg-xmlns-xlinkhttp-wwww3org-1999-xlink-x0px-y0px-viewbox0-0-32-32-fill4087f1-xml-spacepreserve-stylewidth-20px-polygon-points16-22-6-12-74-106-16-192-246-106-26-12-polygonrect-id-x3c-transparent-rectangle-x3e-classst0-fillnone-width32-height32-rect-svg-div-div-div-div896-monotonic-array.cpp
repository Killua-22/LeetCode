class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = true;
        bool dec = true;
        
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i+1] > nums[i])
                dec = false;
        }
        
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i+1] < nums[i])
                inc = false;
        }
        
        return inc || dec;
    }
};