class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        int i = 1;
        
        while(i < words.size()) {
            string x = words[i-1];
            string y = words[i];
            sort(x.begin(), x.end());
            sort(y.begin(), y.end());
            
            if(x == y)
                words.erase(words.begin() + i);
            else
                i++;
        }
        
        return words;
    }
};