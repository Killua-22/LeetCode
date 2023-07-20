public class Solution {
    public int HIndex(int[] citations) {
        Array.Sort(citations);
       
        int index = citations.Length - 1;
        int count = 0;
        while(index > -1 && citations[index] > count)
        {
            index--;
            count++;
        }
        
        return count;
    }
}