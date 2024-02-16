class Solution {
public:
    
    vector<int> freq(string& s){
        vector<int> alphabet(26, 0);
        for (char c: s){
            alphabet[c-'a']++;
        }
        return alphabet;
    }
    
    map<vector<int>, vector<int>> freq2idx;
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       
        int n=strs.size();
        for(int i=0; i<n; i++){
            vector<int> f=freq(strs[i]);
            if (freq2idx.count(f)==0) freq2idx[f]={i};
            else freq2idx[f].push_back(i);
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