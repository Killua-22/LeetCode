public class MedianFinder {


    PriorityQueue<int, int> max;
    PriorityQueue<int, int> min;
    bool odd;

    public MedianFinder() {
        max = new PriorityQueue<int, int>();
        min = new PriorityQueue<int, int>();
        odd = false;        
    }
    
    public void AddNum(int num) {
        odd = !odd;
        int temp = min.EnqueueDequeue(num, -1 * num);
        max.Enqueue(temp, temp);
        
        if(Math.Abs(max.Count - min.Count) > 1)
        {
            temp = max.Dequeue();
            min.Enqueue(temp, -1 * temp);
        }
    }
    
    
    
    public double FindMedian() {
        double median;
        median = odd ? max.Peek() : (max.Peek() + min.Peek())/2.0;
        return median;
    }
}

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.AddNum(num);
 * double param_2 = obj.FindMedian();
 */