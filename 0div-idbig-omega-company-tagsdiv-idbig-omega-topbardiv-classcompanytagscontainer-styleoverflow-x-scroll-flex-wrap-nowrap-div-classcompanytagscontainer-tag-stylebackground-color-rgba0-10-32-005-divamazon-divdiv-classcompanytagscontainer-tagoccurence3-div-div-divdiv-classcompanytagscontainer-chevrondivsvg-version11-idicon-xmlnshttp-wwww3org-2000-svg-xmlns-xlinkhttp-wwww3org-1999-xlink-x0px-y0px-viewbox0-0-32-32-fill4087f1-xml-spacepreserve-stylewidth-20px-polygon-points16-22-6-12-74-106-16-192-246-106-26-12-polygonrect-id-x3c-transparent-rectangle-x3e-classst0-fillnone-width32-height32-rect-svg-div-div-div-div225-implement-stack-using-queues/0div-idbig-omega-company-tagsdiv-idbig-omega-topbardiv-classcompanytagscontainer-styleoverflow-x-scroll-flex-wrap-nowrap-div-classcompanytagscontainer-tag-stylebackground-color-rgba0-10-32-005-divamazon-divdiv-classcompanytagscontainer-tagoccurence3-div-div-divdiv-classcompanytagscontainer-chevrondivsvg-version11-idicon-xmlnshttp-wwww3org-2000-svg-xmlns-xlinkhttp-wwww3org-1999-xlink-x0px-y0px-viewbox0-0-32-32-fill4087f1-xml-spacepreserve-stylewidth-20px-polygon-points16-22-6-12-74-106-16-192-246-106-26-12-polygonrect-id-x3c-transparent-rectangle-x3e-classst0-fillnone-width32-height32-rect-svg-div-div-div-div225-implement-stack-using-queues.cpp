class MyStack {
public:
    queue<int> q, q2;
    MyStack() {
        
    }
    
    void push(int x) {
        if(q.empty())
        {
            q.push(x);
            return;
        }
            
        
        int temp = q.front();
        q.pop();
        q2.push(temp);
        this->push(x);
        while(!q2.empty()){
            q.push(q2.front());
            q2.pop();
        }
        
    }
    
    int pop() {
        int temp = q.front();
        q.pop();
        return temp;
        
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */