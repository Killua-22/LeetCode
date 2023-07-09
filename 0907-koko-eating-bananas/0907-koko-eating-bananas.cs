public class Solution {

    public int MinEatingSpeed(int[] piles, int h) {
        
        var maxinPiles = piles.Max();

        var left = 1; 
        var right = maxinPiles;
        var ans = right;
        while(left<=right)
        {
            var mid = left + (right - left)/2;
            double hours = 0;
            foreach(var p in piles)
            {
                hours += Math.Ceiling((double)p/mid);
            }

            if(hours<=h)
            {
                ans = Math.Min(ans, mid);
                right = mid -1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return ans;
    }
}