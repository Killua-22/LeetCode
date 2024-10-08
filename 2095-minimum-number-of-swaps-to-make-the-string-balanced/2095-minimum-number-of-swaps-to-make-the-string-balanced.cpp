class Solution {
public:
    int minSwaps(string s) {
        int res = 0;

        for(int i=0; i<s.size(); i++) {
            if(s[i] == '[')
                res++;
            else if(res > 0) 
                res--;
        }

        return (res + 1) / 2;
    }
};