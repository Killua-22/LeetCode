public class Solution {
    public int Candy(int[] ratings) {
        
        int n = ratings.Length;
        int candies = n; 
        int i=1;
        
        while(i<n)
        {
            if(ratings[i]==ratings[i-1])
            {
                i++;
                continue;
            }
            
            int peak = 0;
            while(ratings[i] > ratings[i-1])
            {
                peak++;
                candies += peak;
                i++;
                if(i==n) return candies;
            }
            
            int valley = 0;
            while(i<n && ratings[i] < ratings[i-1])
            {
                valley++;
                candies += valley;
                i++;
            }
            
            candies -= Math.Min(peak, valley);
            
        }
        return candies;
    }
}