public class Solution {

    public bool isVowel(char ch)
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' 
        || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            return true;
        else 
            return false;
    }

    

    public string ReverseVowels(string s) {

        char[] s_array = s.ToCharArray();
        int left = 0;
        int right = s.Length-1;

        while(left<=right)
        {
            if(isVowel(s_array[left]) && isVowel(s_array[right]))
            {
                char tempchar = s_array[right];
                s_array[right] = s_array[left];
                s_array[left] = tempchar;
                left+=1;
                right-=1;
            }
            else if(isVowel(s_array[left]))
            {
                right-=1;
            }
            else if(isVowel(s_array[right]))
            {
                left+=1;
            }
            else
            {
                left+=1;
                right-=1;
            }
        }
        s = String.Concat(s_array);
        return s;
    }
}