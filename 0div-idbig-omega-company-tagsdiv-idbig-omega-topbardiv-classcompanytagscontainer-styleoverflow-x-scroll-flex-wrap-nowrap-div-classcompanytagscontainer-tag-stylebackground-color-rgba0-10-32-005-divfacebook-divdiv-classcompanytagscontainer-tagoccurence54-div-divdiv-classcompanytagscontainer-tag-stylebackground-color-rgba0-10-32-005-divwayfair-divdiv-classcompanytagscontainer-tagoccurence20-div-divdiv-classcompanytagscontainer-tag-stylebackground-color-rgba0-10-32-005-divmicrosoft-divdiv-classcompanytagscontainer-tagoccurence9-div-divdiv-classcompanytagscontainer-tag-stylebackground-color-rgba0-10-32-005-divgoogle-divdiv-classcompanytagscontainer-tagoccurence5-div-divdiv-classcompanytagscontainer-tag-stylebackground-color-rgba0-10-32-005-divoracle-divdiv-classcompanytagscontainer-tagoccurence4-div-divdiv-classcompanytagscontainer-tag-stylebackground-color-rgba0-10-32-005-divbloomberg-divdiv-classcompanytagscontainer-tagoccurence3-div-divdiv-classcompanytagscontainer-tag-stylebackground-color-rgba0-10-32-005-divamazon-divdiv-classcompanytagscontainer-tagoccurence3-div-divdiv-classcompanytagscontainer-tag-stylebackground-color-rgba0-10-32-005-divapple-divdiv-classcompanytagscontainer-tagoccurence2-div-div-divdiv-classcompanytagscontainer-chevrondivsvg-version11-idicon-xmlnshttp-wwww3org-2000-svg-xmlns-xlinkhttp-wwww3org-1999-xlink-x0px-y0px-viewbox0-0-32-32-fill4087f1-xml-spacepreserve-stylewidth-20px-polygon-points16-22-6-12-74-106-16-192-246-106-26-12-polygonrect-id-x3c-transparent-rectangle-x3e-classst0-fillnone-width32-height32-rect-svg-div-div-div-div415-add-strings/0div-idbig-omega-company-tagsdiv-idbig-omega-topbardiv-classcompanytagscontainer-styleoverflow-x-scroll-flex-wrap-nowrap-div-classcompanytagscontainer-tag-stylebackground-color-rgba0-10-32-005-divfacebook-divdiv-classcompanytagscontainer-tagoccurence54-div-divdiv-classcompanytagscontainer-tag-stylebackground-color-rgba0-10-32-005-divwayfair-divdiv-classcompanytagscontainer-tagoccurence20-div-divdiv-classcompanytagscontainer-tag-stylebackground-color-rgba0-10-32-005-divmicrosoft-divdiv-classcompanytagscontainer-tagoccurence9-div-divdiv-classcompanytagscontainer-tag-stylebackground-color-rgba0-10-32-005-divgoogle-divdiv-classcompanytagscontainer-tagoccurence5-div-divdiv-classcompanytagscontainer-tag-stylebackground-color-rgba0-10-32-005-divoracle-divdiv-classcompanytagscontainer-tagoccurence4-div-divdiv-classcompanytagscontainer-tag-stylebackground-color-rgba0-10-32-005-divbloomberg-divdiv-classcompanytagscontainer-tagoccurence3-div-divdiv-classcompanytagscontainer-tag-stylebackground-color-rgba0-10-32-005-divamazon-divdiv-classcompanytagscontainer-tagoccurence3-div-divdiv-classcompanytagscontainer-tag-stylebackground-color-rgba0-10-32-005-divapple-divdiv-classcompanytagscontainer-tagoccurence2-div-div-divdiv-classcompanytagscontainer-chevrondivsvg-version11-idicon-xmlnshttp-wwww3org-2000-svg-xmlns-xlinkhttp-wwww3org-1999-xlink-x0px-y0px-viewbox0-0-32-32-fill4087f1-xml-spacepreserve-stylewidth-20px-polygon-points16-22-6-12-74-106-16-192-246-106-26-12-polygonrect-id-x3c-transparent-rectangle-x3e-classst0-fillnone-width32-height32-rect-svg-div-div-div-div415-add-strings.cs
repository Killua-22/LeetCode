public class Solution {
    public string AddStrings(string num1, string num2) {
        
        int carry = 0, i = num1.Length - 1, j = num2.Length - 1;
        StringBuilder sb = new();
        while (i > -1 || j > -1 || carry != 0) {
            int a = i > -1 ? num1[i] - '0' : 0;
            int b = j > -1 ? num2[j] - '0' : 0;
            i--;
            j--;

            int sum = a + b + carry;
            sb.Insert(0, sum % 10);
            carry = sum / 10;
        }

        return sb.ToString();
    }
}