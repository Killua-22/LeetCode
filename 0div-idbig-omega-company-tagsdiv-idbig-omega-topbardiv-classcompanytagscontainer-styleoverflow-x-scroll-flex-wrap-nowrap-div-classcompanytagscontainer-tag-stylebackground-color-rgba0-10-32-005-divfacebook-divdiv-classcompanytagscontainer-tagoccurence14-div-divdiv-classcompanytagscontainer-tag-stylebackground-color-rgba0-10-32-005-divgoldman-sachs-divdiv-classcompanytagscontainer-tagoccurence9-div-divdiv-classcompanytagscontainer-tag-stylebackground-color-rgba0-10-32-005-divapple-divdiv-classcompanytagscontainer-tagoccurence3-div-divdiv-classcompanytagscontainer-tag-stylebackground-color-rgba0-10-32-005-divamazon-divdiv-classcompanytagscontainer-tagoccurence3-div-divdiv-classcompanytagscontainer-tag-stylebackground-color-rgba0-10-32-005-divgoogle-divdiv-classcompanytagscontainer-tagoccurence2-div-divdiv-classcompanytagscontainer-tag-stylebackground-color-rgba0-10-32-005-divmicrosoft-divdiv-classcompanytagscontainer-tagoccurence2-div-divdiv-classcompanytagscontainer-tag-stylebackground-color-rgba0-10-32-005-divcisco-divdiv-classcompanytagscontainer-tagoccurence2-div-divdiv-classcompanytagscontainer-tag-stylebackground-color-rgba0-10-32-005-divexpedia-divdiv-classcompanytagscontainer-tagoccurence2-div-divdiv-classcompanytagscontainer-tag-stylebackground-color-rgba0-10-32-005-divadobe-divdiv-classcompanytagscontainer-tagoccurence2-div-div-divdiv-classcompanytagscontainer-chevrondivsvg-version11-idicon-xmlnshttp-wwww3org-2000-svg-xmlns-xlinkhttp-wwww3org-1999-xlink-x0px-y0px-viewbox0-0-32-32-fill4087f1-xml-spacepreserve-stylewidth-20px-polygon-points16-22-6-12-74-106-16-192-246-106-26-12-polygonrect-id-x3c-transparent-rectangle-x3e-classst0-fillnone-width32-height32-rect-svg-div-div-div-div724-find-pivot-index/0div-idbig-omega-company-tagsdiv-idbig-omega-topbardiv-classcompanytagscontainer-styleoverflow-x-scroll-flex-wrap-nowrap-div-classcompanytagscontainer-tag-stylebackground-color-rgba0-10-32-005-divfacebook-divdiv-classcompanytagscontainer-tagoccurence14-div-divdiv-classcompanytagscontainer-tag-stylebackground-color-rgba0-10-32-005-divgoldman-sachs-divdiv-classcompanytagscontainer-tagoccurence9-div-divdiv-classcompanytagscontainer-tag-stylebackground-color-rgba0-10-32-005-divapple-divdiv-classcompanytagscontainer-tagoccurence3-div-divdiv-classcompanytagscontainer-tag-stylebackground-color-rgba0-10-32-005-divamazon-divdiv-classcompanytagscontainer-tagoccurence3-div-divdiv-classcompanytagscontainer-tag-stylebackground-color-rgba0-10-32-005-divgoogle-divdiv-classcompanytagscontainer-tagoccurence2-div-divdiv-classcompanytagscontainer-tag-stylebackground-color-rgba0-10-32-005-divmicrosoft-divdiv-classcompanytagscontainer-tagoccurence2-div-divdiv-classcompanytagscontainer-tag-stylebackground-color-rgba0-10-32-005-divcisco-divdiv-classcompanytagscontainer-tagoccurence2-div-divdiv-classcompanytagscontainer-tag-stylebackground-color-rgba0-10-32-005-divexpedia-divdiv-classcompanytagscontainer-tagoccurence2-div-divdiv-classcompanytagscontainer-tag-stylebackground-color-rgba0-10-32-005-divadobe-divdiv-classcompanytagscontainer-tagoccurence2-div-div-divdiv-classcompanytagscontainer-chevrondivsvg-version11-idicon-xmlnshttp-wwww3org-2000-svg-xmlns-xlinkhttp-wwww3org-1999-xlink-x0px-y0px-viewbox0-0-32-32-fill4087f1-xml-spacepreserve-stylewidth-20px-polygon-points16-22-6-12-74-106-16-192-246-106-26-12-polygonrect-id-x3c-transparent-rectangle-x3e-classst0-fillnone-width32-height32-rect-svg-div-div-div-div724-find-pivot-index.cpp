class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum = 0;
        int rightsum = 0;
        
        for(int i=1; i<nums.size(); i++)
        {
            rightsum += nums[i];
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            if(leftsum==rightsum)
                return i;
            
            leftsum += nums[i];
            
            if(i+1 < nums.size())
            {
                rightsum -= nums[i+1];
            }
                
        }
        return -1;
    }
};