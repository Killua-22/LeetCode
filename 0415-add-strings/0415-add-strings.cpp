class Solution {
public:
    string addStrings(string num1, string num2) {
        int one = num1.size()-1;
        int two = num2.size()-1;
        int carry = 0;
        string ans = "";
        
        while(one > -1 || two > -1 || carry != 0) {
            
            int temp1 = one > -1 ? num1[one] - '0' : 0;
            int temp2 = two > -1 ? num2[two] - '0' : 0;
            one--;
            two--;
            
            int sum = temp1 + temp2 + carry;
            
            ans.insert(0, to_string(sum % 10));
            carry = sum/10;
            
        }
        
        return ans;
    }
};