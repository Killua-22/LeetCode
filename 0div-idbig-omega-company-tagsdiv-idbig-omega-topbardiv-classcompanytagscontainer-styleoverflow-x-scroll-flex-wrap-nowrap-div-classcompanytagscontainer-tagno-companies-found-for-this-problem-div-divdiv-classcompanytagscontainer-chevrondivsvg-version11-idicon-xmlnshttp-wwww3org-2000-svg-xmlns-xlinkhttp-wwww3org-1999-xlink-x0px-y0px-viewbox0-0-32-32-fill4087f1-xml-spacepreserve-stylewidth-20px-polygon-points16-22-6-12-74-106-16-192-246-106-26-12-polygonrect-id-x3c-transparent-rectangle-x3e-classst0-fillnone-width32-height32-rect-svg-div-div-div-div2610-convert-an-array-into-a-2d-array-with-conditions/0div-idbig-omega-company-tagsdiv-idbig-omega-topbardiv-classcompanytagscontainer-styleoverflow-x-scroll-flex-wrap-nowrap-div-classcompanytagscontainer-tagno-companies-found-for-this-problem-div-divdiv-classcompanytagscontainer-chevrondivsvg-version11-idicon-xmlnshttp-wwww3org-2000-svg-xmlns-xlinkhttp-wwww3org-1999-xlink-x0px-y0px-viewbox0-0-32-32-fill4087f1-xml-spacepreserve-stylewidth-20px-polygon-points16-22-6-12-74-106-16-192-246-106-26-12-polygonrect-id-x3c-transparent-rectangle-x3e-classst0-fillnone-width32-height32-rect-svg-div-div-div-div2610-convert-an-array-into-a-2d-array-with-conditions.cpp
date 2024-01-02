class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        
        unordered_map<int, int> um;
        
        for(auto i: nums)
        {
            um[i]++;
        }
        
        while(!um.empty())
        {
            vector<int> temp;
            for(auto it=um.begin(); it!=um.end();)
            {
                temp.push_back(it->first);
                it->second--;
                
                if(it->second == 0)
                    it = um.erase(it);
                else
                    it++;
                
            }
            
            ans.push_back(temp);
        }
        
        return ans;
    }
};