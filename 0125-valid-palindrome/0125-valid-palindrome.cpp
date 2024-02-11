class Solution {
public:
    bool isPalindrome(string s) {
        
        vector<char> arr1, arr2;
        
        for(int i=0; i<s.size(); i++) {
            
            if(isalnum(s[i])) {
                
                arr1.push_back(tolower(s[i]));
            }
            
            
        }
        arr2 = arr1;
        reverse(arr1.begin(), arr1.end());
        
        return arr1 == arr2;
        
    }
};