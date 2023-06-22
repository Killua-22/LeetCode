public class Solution {
    public int Compress(char[] chars) {

        int len_chars = chars.Length;
        if(len_chars==0) return 0;

        char temp = chars[0];
        int count = 1;
        int length = 0;

        for(int i=1; i<=len_chars; i++)
        {
            if(i<len_chars && chars[i-1]==chars[i])
                count++;
            else
            {
                chars[length] = temp;
                length+=1;
                string countString = count.ToString();
                if(count>1)
                {
                    
                    for(int j=0; j<countString.Length; j++)
                    {
                        chars[length+j] = countString[j];
                    }

                    length += countString.Length;
                }

                if(i<len_chars) temp = chars[i];
                count=1;

            }
        }

        return length;
        

    }
}