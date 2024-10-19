class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        if(n < 3)
            return {};
        
        sort(nums.begin(), nums.end());

        if(nums[0] > 0) 
            return {};

        vector<vector<int>> res;

        for(int i=0; i<n; i++) {
            if(nums[i] > 0)
                break;
            
            if(i>0 && nums[i] == nums[i-1])
                continue;
            
            int l = i+1, r = n-1; 
            int sum = 0;

            while(l < r) {
                sum = nums[i] + nums[l] + nums[r];

                if(sum > 0)    
                    r--;
                else if(sum < 0)
                    l++;
                else {
                    res.push_back({nums[i], nums[l], nums[r]});
                    int low = nums[l], high = nums[r];
                    while(l<r && nums[l] == low) 
                        l++;
                    while(l<r && nums[r] == high)
                        r--;
                }
            }
        }

        return res;
    }
};