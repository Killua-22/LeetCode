class MyHashMap {
public:
    
    vector<int> m;
    vector<int> m_v;
    
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        auto it = find(m.begin(), m.end(), key);
        if(it != m.end())
        {
            m_v[it - m.begin()] = value;
        }else {
            m.push_back(key);
            m_v.push_back(value);
        }
    }
    
    int get(int key) {
        auto it = find(m.begin(), m.end(), key);
        if(it != m.end()) {
            return m_v[it - m.begin()];
        }
            
        return -1;
    }
    
    void remove(int key) {
        auto it = find(m.begin(), m.end(), key);
        if(it != m.end())
            m_v[it - m.begin()] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */