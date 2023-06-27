public class Solution {
    public int[] AsteroidCollision(int[] asteroids) {
        Stack<int> stack = new Stack<int>();

        foreach(int i in asteroids)
        {
            if(i > 0)
            {
                stack.Push(i);
                continue;
            }

            int j = Math.Abs(i);
            while(stack.Any() && stack.Peek() < j && stack.Peek()>0)
                stack.Pop();
            
            if(stack.Any() && stack.Peek() == j)
            {
                stack.Pop();
                continue;
            }

            if(!stack.Any() || stack.Peek()<0)
                stack.Push(i);
        }

        
        int[] a = stack.ToArray();
        Array.Reverse(a);
            
        return a;
        
        
    }
}