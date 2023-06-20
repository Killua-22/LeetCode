public class Solution {
    public IList<bool> KidsWithCandies(int[] candies, int extraCandies) {
        
        List<bool> answer = new List<bool>();

        int maxCandy = candies.Max();

        for(int i=0; i<candies.Length; i++)
        {
            answer.Add((candies[i]+extraCandies) >= maxCandy ? true : false);
        }

        return answer;

    }
}