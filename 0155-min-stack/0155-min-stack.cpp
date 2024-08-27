class MinStack {
public:
    vector<pair<int, int>> v;
    int minm;
    MinStack() {
        minm = INT_MAX;
    }
    
    void push(int val) {

        minm = v.empty() ? val : min(val, v.back().second);
        v.push_back({val, minm});
        // if(val < minm) 
        //     minm = val;
        // v.push_back(pair<int, int>(val, minm));
        
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        return v[v.size()-1].first;
    }
    
    int getMin() {
        return v[v.size()-1].second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */