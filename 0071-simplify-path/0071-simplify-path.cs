public class Solution {
    public string SimplifyPath(string path) {

        Stack s = new Stack();
        StringBuilder final = new StringBuilder();
        string[] p = path.Split("/");
        
        for(int i=0; i<p.Length; i++)
        {
            if(s.Count!=0  && p[i]=="..") s.Pop();
            if(!(p[i]==".") && !(p[i]=="..") && !(p[i]==""))
                s.Push(p[i]);
        }
        
        if(s.Count == 0)
            return "/";
        while(s.Count!=0)
        {
            final.Insert(0, s.Pop()).Insert(0, "/");
        }
        
        return final.ToString();
    }
}