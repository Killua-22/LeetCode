class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        
        int ans = 0;
        int mindiff = INT_MAX;
        
        for(int i=0; i<nums.size()-2; i++) {
            
            int left = i+1;
            int right = nums.size()-1;
            while(left < right) {
                int val = nums[i] + nums[left] + nums[right];
            
                int diff = abs(val - target);

                if(diff < mindiff) {
                    ans = val;
                    mindiff = diff;
                }

                if(val > target) {
                    right--;
                }else {
                    left++;
                }
            
            }
            
        }
        
        return ans;
    }
};