class Solution {
public:
    
    

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       
        int n=strs.size();
        
        map<vector<int>, vector<int>> freq2idx;
        
        for(int i=0; i<n; i++){
            
            vector<int> cnt(26, 0);
            
            for(auto c: strs[i]) {
                cnt[c-'a']++;
            }
            
            if (freq2idx.count(cnt)==0) freq2idx[cnt]={i};
            
            else freq2idx[cnt].push_back(i);
        }
        vector<vector<string>> ans(freq2idx.size());
        int i=0; 
        for(auto x: freq2idx){
            for(int v: x.second)
                ans[i].push_back(strs[v]); 
            i++;
        }  
        return move(ans);
        
    }
};