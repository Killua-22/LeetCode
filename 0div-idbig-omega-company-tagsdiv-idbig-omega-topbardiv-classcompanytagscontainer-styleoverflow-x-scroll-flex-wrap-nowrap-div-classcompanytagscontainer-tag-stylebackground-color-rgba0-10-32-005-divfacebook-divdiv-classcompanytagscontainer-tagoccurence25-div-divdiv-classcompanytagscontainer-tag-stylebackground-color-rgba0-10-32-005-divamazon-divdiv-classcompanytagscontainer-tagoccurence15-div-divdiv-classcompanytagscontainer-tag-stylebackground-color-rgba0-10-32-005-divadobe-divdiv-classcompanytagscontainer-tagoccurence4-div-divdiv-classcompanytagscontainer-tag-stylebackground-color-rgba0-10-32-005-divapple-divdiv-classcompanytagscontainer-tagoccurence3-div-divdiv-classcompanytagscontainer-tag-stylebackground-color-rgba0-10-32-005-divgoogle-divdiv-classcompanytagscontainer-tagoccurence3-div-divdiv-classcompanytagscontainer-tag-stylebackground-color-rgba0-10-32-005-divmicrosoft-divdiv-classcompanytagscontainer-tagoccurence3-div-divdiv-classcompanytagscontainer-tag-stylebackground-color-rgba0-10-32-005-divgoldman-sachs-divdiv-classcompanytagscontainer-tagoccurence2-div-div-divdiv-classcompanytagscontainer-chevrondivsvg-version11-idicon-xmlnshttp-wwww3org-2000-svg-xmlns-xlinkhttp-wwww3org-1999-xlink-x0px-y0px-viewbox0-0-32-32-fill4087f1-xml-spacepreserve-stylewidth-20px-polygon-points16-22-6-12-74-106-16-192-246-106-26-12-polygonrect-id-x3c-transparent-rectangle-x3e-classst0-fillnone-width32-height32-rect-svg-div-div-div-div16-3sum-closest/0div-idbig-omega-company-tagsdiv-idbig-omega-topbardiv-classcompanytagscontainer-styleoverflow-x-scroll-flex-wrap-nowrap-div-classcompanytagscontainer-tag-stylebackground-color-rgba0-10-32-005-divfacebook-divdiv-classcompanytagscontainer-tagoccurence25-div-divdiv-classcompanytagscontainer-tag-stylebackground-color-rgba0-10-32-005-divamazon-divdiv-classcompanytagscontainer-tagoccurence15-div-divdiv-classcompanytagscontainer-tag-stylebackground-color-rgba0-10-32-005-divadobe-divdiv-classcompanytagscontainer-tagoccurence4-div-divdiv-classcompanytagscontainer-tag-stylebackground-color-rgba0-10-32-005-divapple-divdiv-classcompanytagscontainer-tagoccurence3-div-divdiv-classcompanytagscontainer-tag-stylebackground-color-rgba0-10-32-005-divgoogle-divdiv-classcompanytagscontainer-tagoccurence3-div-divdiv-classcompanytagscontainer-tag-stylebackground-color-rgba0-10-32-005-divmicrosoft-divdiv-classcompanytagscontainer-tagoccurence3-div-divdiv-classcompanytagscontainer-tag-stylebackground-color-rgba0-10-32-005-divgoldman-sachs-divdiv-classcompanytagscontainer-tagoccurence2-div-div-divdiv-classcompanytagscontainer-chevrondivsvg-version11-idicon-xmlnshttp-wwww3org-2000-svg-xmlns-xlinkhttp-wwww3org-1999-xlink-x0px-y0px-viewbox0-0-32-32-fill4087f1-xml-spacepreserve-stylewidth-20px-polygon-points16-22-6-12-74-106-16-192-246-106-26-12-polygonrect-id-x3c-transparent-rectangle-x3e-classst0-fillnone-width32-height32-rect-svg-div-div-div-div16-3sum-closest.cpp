class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int minans = INT_MAX;
        int result = 0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-2; i++)
        {
            int left = i+1; 
            int right = n-1;
            
            while(left < right)
            {
                int value = nums[i] + nums[left] + nums[right];
                int diffofvalueandtarget = abs(value - target);
                if(diffofvalueandtarget < minans)
                {
                    result = value;
                    minans = diffofvalueandtarget;
                }
                
                if(value > target)
                    right--;
                else
                    left++;
            }
        }
        
        return result;
        
    }
};