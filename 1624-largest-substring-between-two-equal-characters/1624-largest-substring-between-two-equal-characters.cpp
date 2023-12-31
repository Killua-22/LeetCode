class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int start=0; 
        int end = s.length();
        int max_length = -1;
        for(int i=start; i<end; i++)
        {
            int e = end;
            if(s[i]!=s[e]){
                while(e>0 && s[e] != s[i])
                    e--;
                
            }
            max_length = max(max_length, e-i-1);
            cout<<max_length<<endl;
        }
        
        return max_length;
    }
};