class Solution {
public:
    
    int rev(int n)
    {
        int res = 0;
        
        while(n>0){
            int temp = n%10;
            res = res*10 + temp;
            
            n = n/10;
        }
        
        return res;
        
    }
    
    int countNicePairs(vector<int>& nums) {
        long count = 0;
        
        unordered_map<int, int> map;
        
        for(int i=0; i<nums.size(); i++)
        {
            nums[i] = nums[i] - rev(nums[i]);
            
            if(map.find(nums[i]) != map.end())
            {
                count+= map[nums[i]];
            }
            map[nums[i]]++;
        }
        
        return (int) (count%1000000007);
    }
};