class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       
        int n=strs.size();
        
        map<vector<int>, vector<int>> freq;
        
        for(int i=0; i<n; i++){
            
            vector<int> cnt(26, 0);
            
            for(auto c: strs[i]) {
                cnt[c-'a']++;
            }
            
            if (freq.count(cnt)==0) freq[cnt]={i};
            else freq[cnt].push_back(i);
        }
        vector<vector<string>> ans(freq.size());
        int i=0; 
        for(auto x: freq){
            for(int v: x.second)
                ans[i].push_back(strs[v]); 
            i++;
        }  
        return move(ans);
        
    }
};