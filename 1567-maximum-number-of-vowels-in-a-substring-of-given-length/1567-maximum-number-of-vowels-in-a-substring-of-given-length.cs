public class Solution {
    bool isVowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    public int MaxVowels(string s, int k) {
        int max = 0;
        int i=0; 
        int j=0;
        int count = 0;

        while(j<s.Length)
        {
            if(isVowel(s[j])) count++;
            if(j-i+1 == k) 
            {
                max = Math.Max(count,max);
                if(isVowel(s[i])) count--;
                i++;
            }
            j++;
        }

        return max;

    }
}