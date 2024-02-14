class Solution {
public:
    
    bool isvalid(vector<bool>& ispicked, string s) {
        
        vector<bool> repeat(26, false);
        
        for(int i=0; i<s.size(); i++) {
            if(repeat[s[i] - 'a'])
                return false;
            repeat[s[i] - 'a'] = true;
        }
        
        for(int i=0; i<s.size(); i++) {
            if(ispicked[s[i]-'a'])
                return false;
        }
        
        return true;
    }
    
    int helper(int index, vector<string>& arr, vector<bool>& ispicked, int len) {
        
        if(index == arr.size())
            return len;
        
        string curr = arr[index];
        
        if(!isvalid(ispicked, curr)) {
            return helper(index+1, arr, ispicked, len);
        }
        else {
            
            for(int i=0; i<curr.size(); i++) {
                ispicked[curr[i] - 'a'] = true;
            }
            
            len += curr.size();
            
            int pick = helper(index+1, arr, ispicked, len);
            
            for(int i=0; i<curr.size(); i++) {
                ispicked[curr[i] - 'a'] = false;
            }
            
            len -= curr.size();
            
            int notpick = helper(index+1, arr, ispicked, len);
            
            
            return max(pick, notpick);
        }

        
    }
    
    int maxLength(vector<string>& arr) {
        vector<bool> ispicked(26, false);
        return helper(0, arr, ispicked, 0);
        
    }
};