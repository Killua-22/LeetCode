public class Solution {
    public int LargestAltitude(int[] gain) {
        int max = 0;
        int altitude = 0;

        for(int i=0; i<gain.Length; i++)
        {
            altitude+=gain[i];
            if(altitude>max) max = altitude;
        }
        return max;
    }
}