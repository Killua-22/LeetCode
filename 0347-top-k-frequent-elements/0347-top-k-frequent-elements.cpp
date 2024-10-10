class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> map;

        vector<pair<int, int>> lst;

        vector<int> res;

        for(auto num: nums) map[num]++;

        for(auto pair: map) lst.emplace_back(pair.second, pair.first);

        sort(lst.begin(), lst.end());

        for(auto it= lst.rbegin(); it!=lst.rend(); it++) {
            res.push_back(it->second);

            k--;

            if(k == 0) break;
        }

        return res;    
    
    }
};