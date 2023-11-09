class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //tortoise and hare algorithm
        
        int tortoise = nums[0];
        int hare = nums[0]; 
        
        while(true)
        {
            tortoise = nums[tortoise];
            
            hare = nums[nums[hare]];
            
            if(hare == tortoise)
                break;
        }
        
        tortoise = nums[0];
        
        while(tortoise != hare)
        {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }
        
        return tortoise;
    }
};