class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        int start = 0;
        int end = n - k;
        
        int sum = 0;
           
        for(int i=end; i<n; i++)
        {
            sum += nums[i];
        }
        int m = sum;
        
        while(end < n)
        {
            sum += nums[start] - nums[end];
            m = max(m, sum);
            start++;
            end++;
            
        }
        return m;
    }
};