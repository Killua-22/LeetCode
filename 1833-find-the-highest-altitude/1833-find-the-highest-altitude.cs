public class Solution {
    public int LargestAltitude(int[] gain) {
        int n = gain.Length;
        int[] altitude = new int[n+1];
        altitude[0] = 0;
        int max = altitude[0];
        for(int i=1; i<=n; i++)
        {
            altitude[i] = gain[i-1] + altitude[i-1];
            if(altitude[i]>max) max = altitude[i];
        }

        return max;
    }
}