public class Solution {
    public int MyAtoi(string s) {
        
        s = s.Trim();
        if(s.Length == 0)
            return 0;
            
        bool positive = true;
        int i=0;
        
        if(s[i] == '-')
        {
            positive = false;
            i++;           
        }
        else if(s[i] == '+')
            i++;
        
        long ans = 0;
        for(; i<s.Length; i++)
        {
            if(char.IsDigit(s[i]))
            {
                ans = (ans * 10) + s[i] - '0';
                 if(positive)
                {
                    if(ans > int.MaxValue)
                        return int.MaxValue;
                }
                else
                {
                    if(-1 * ans < int.MinValue)
                    {
                        return int.MinValue;
                    }
                }
            }else
                break;
           
        }
        
        if(!positive)
        {
            ans = -1 * ans;
        }
        
        return (int)ans;
        
    }
}