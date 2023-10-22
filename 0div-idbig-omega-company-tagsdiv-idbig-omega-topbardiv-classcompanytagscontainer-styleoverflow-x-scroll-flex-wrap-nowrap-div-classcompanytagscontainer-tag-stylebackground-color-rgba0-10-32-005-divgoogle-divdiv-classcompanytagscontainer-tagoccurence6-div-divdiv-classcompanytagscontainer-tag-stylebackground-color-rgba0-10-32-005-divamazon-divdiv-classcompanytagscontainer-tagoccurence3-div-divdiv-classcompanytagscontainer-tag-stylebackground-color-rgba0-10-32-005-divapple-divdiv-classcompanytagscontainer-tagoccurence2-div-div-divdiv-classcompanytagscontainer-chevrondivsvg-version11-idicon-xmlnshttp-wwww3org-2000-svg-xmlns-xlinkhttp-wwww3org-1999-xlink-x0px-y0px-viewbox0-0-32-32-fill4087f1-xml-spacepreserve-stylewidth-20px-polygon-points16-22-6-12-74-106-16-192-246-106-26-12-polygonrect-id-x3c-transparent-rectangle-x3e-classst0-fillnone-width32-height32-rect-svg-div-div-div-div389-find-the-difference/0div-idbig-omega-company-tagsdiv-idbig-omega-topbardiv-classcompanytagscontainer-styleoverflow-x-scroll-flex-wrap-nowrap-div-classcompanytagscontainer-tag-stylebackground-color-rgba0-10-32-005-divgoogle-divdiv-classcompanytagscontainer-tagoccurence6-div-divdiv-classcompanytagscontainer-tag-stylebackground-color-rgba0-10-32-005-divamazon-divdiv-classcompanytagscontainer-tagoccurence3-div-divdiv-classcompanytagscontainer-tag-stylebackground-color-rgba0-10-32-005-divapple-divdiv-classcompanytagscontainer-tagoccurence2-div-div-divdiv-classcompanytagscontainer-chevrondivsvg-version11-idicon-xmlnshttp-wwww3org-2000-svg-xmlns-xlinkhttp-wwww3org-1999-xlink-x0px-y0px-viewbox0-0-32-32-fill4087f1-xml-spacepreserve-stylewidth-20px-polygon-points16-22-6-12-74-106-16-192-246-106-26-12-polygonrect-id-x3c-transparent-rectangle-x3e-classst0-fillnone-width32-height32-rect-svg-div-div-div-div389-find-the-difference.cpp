class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> map;
        
        for(int i=0; i<s.size(); i++)
        {
            map[s[i]]++;
        }
        
        for(int i=0; i<t.size(); i++)
            map[t[i]]--;
        
        for(auto itr = map.begin(); itr!=map.end(); itr++)
        {
            if(itr->second == -1)
                return itr->first;
        }
        return NULL;
    }
};