class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        map<char, int> orderIndex;
        
        for(int i=0; i<order.size(); i++) {
            orderIndex.insert(pair<char, int>(order[i], i));
        }
        
        
        for(int i=0; i<words.size()-1; i++) {
            
            string word1 = words[i];
            string word2 = words[i+1];
            
            for(int j=0; j<word1.size(); j++) {
                if(j == word2.size())
                    return false;
                
                if(word1[j] != word2[j]) {
                    if(orderIndex[word2[j]] < orderIndex[word1[j]])
                        return false;
                    break;
                }
            }
            
        }
        
        return true;
        
    }
};