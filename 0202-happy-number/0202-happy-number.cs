public class Solution {
    
    public int squareofdigits(int n)
    {
        int sum = 0;
        while(n > 0)
        {
            int x = n % 10;
            sum += x * x;
            n = n / 10;
        }
        return sum;
    }
    
    public bool IsHappy(int n) {
        
        if(n==1)
            return true;
        
        HashSet<int> set = new HashSet<int>();
        
        while(n!=1)
        {
            int next = squareofdigits(n);
            
            if(set.Contains(next))
                return false;
            
            set.Add(next);
            n = next;
        }
        
        return true;
        
    }
}