class Solution {
public:
    
    
    
    string addBinary(string a, string b) {
        
        string res = "";
        int one = a.size()-1;
        int two = b.size()-1;
        int carry = 0;
        
        while(one > -1 || two > -1 || carry != 0) {
            
            int temp1 = one > -1 ? a[one] - '0' : 0;
            int temp2 = two > -1 ? b[two] - '0': 0;
            int sum = 0;
            
            if(carry == 1) {
                if(temp1 == 1 && temp2 == 1) {
                    carry = 1;
                    sum = 1;
                } else if(temp1 == 0 && temp2 == 0) {
                    carry = 0;
                    sum = 1;
                } else {
                    carry = 1;
                    sum = 0;
                }
                
            } else {
                if(temp1 == 1 && temp2 == 1) {
                    carry = 1;
                    sum = 0;
                } else if(temp1 == 0 && temp2 == 0) {
                    carry = 0;
                    sum = 0;
                } 
                else {
                    carry = 0;
                    sum = 1;
                }
            }
            one--;
            two--;
            res.insert(0, to_string(sum));
            
        }
        
        return res;
    }
};