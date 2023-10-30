class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int p1 = 0;
        int p2 = 0;
        
        for(int i=0; i<n; i++)
        {
            int temp = p1;
            p1 = max(p1, p2 + nums[i]);
            p2 = temp;
        }
        
        return p1;
        
        
    }
};