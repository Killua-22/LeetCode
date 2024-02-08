class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int, int> map;
        int sum = 0;
        int ans = 0;
        map[sum] = 1;
        
        for(auto x : nums) {
            
            sum += x;
            int temp = sum - k;
            
            if(map.find(temp) != map.end()) {
                ans += map[temp];
            }
            
            map[sum]++;
        }
        
        return ans;
        
    }
};