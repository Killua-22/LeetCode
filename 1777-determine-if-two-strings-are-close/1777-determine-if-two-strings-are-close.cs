public class Solution {
    public bool CloseStrings(string word1, string word2) {
        if(word1.Length != word2.Length)
            return false;
        else
        {
            Dictionary<char, int> dict1 = new Dictionary<char, int>();
            Dictionary<char, int> dict2 = new Dictionary<char, int>();

            for(int i=0; i<word1.Length; i++)
            {
                if(dict1.ContainsKey(word1[i]))
                    dict1[word1[i]]++;
                else
                    dict1.Add(word1[i], 1);

                if(dict2.ContainsKey(word2[i]))
                    dict2[word2[i]]++;
                else
                    dict2.Add(word2[i], 1);
            }

            if(!Enumerable.SequenceEqual(dict1.Keys.OrderBy(x => x), dict2.Keys.OrderBy(x => x)))
                return false;

            return Enumerable.SequenceEqual(dict1.Values.OrderBy(x => x), dict2.Values.OrderBy(x => x));

            
            
            
            

        }
    }
}