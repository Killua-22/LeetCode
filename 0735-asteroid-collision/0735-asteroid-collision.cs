public class Solution {
    public int[] AsteroidCollision(int[] asteroids) {
        Stack<int> stack = new Stack<int>();

        for(int i=0; i<asteroids.Length; i++)
        {
            if(stack.Count>0 && asteroids[i] < 0 && stack.Peek() > 0)
            {
                
                if((-1)*asteroids[i] > stack.Peek())
                {
                    stack.Pop();
                    i--;
                }
                
                else if((-1)*asteroids[i] == stack.Peek())
                {
                    stack.Pop();
                }
                    
            }

            else
                stack.Push(asteroids[i]);
        }

        
            int[] a = stack.ToArray();
            Array.Reverse(a);
            
            return a;
        
        
    }
}