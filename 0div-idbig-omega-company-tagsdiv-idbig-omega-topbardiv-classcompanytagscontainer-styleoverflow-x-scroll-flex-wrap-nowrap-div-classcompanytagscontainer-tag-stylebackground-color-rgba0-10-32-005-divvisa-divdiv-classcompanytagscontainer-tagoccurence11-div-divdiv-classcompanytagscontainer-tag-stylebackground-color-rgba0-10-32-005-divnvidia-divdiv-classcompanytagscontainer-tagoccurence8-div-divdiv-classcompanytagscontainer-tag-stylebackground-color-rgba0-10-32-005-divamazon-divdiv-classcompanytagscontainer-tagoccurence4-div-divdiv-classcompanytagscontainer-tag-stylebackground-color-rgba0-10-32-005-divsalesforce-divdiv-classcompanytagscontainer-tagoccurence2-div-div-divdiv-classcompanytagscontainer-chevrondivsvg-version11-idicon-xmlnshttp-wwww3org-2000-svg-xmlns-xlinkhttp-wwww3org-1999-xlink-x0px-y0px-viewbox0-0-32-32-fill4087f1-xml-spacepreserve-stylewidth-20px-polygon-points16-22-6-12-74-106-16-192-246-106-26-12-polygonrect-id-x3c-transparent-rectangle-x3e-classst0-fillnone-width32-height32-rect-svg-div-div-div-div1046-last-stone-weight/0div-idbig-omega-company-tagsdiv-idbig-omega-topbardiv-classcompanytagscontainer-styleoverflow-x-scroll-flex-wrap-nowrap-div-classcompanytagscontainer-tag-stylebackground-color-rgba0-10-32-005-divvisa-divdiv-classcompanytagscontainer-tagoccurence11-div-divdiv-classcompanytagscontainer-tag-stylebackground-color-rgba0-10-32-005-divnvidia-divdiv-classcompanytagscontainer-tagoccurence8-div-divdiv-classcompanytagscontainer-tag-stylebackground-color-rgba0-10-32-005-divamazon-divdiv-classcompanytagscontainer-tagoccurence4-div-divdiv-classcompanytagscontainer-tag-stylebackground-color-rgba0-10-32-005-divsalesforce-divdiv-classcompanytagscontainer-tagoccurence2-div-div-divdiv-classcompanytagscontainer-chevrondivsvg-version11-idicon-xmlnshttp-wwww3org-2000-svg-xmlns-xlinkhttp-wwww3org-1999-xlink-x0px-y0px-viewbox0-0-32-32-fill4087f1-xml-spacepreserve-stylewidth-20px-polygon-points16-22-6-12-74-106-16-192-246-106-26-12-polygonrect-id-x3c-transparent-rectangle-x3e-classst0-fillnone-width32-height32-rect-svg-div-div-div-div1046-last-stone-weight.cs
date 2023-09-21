public class Solution {
    public int LastStoneWeight(int[] stones) {
        PriorityQueue<int, int> pq = new PriorityQueue<int, int>();
        
        foreach(var stone in stones)
            pq.Enqueue(stone, 0 - stone);
        
        while(pq.Count > 1)
        {
            int x = pq.Peek(); pq.Dequeue();
            int y = pq.Peek(); pq.Dequeue();
            
            if(x > y) pq.Enqueue(x-y, 0 - (x-y));
        }
        
        return pq.Count > 0 ? pq.Peek() : 0;
    }
}