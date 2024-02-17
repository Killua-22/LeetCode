class Solution {
public:
    string removeKdigits(string num, int k) {
        
        if(num.size() <= k)
            return "0";
        
        if(k==0)
            return num;
        
        string res = "";
        stack<char> s;
        
        s.push(num[0]);
        
        for(int i=1; i<num.size(); i++) {
            
            while(k>0 && !s.empty() && num[i] < s.top()) {
                --k;
                s.pop();
            }
            
            s.push(num[i]);
            
            if(s.size() == 1 && num[i] == '0')
                s.pop();
            
        }
        
        while(k && !s.empty())
        {
            // for cases like "456" where every num[i] > num.top()
            --k;
            s.pop();
        }
        
        while(!s.empty())
        {
            res.push_back(s.top()); // pushing stack top to string
            s.pop(); // pop the top element
        }
        
        reverse(res.begin(), res.end());
        
        if(res.size() == 0)
            return "0";
        
        return res;
        
        
    }
};