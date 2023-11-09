class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++)
        {
            if(i != 0 && (nums[i] == nums[i-1])) {
                continue;
            }
            for(int j=i+1; j<n; j++)
            {
                if(j-1 != i && (nums[j] == nums[j-1])) {
                    continue;
                }
                
                
                int ind_c = j+1;
                int ind_d = n-1;
                
                while(ind_c < ind_d)
                {
                    long sum = (long)nums[i] + (long)nums[j] + (long)nums[ind_c] + (long)nums[ind_d];
                    if(sum == target){
                        if(ind_c-1 != j && (nums[ind_c] == nums[ind_c-1]) ) {
                            ind_c++;
                            continue;
                        }
                        if(ind_d != n-1 && (nums[ind_d] == nums[ind_d+1])) {
                            ind_d--;
                            continue;
                        }
                        res.push_back({nums[i], nums[j], nums[ind_c], nums[ind_d]});
                        // ind_c++;
                        ind_d--;
                    }
                    else if(sum < target)
                    {
                        ind_c++;
                    }
                    else
                        ind_d--;
                }
                // while(j+1 < n && nums[j] == nums[j+1]) j++;
            }
        }
        return res;
    }
};