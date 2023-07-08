public class Solution {
    public int[] SuccessfulPairs(int[] spells, int[] potions, long success) {
        
        var length = spells.Length;
        int[] pairs = new int[length];
        Array.Sort(potions);
        for(var i=0; i<length; i++)
        {
            var search = (long)Math.Ceiling((double)success/spells[i]);
            var low = 0;
            var high = potions.Length-1;
            
            while(low<high)
            {
                var mid = low + (high - low)/2;
                if(potions[mid] >= search) 
                    high = mid;
                else
                {
                    low = mid+1;  
                }       
            }
            if(potions[low] < search)
                low = -1;
            pairs[i] = low == -1 ? 0 : potions.Length - low;
        }
        return pairs;

    }
}