class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        
        string res = "";
        
        while(i > -1 || j > -1 || carry != 0)
        {
            int a = i > -1 ? num1[i] - '0' : 0;
            int b = j > -1 ? num2[j] - '0' : 0;
            i--;
            j--;
            
            int sum = a + b + carry;
            // string temp = to_string(sum % 10);
            res.insert(0, to_string(sum % 10));
            
            carry = sum/10;
        }
        
        return res;
    }
};