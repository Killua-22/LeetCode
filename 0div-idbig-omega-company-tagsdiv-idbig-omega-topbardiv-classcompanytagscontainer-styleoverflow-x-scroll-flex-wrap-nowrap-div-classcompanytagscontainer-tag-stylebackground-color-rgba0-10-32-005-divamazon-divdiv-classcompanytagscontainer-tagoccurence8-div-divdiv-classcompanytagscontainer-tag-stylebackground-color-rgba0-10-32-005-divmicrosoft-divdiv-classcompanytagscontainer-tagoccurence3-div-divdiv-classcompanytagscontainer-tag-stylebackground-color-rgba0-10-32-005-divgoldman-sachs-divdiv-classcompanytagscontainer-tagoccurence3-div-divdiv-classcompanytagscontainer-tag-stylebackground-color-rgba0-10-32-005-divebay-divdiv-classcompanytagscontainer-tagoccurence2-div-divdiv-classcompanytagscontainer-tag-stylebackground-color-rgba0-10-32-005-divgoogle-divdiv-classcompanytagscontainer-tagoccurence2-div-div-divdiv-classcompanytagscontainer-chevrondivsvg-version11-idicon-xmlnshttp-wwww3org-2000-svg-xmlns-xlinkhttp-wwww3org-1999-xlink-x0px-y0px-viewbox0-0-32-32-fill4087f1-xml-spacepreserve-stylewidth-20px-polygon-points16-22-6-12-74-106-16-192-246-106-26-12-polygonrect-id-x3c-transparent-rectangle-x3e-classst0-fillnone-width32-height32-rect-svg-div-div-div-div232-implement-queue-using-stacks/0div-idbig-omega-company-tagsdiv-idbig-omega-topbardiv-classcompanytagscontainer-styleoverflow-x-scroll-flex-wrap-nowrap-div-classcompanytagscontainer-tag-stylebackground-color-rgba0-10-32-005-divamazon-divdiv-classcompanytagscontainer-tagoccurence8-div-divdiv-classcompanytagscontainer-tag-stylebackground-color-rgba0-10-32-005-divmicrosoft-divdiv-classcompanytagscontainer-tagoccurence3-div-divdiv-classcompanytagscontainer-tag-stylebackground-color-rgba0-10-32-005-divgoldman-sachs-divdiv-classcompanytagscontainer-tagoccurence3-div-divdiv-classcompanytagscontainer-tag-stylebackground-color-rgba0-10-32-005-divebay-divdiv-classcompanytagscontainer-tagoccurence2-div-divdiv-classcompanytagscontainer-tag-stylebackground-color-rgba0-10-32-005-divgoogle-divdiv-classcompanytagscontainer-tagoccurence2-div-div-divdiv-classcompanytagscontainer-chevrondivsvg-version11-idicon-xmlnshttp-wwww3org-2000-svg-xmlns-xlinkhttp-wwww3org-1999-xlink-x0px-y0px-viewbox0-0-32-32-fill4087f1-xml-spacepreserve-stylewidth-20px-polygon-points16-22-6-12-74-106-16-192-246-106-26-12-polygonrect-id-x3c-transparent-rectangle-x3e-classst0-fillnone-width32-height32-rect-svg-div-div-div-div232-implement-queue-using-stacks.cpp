class MyQueue {
public:
    stack<int> s;
    stack<int> t;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
        
            
    }
    
    int pop() {
        
        while(!s.empty())
        {
            int x = s.top();
            t.push(x);
            s.pop();
        }
            
        int y = t.top();
        int rm = y;
        t.pop();
        
        while(!t.empty())
        {
            int z = t.top();
            s.push(z);
            t.pop();
        }
            
        
        return rm;
    }
    
    int peek() {
       while(!s.empty())
        {
            int x = s.top();
            t.push(x);
            s.pop();
        }
            
        int y = t.top();
        int rm = y;
        
        
        while(!t.empty())
        {
            int z = t.top();
            s.push(z);
            t.pop();
        }
            
        
        return rm;
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */