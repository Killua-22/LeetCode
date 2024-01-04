class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> map;
        
        for(auto x: nums)
        {
            map[x]++;
        }
        
        int count = 0;
        
        for(auto x: map)
        {
            int temp = x.second;
            if(temp == 1) return -1;
            count += temp/3;
            if(temp % 3) count++;
        }
        
        return count;
            
    }
};