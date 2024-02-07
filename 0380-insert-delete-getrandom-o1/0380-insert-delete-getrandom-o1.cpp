class RandomizedSet {
public:
    
    unordered_set<int> temp;

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(temp.find(val) != temp.end())
            return false;
        temp.insert(val);
        return true;
    }
    
    bool remove(int val) {
        if(temp.find(val) != temp.end()) {
            temp.erase(val);
            return true;
        }
        return false;
     
    }
    
    int getRandom() {
        int n = temp.size();
        
        int random = rand() % n;
        int i=0; 
        for(auto x: temp) {
            if(i == random)
                return x;
            i++;
        }
        return 0;
        
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */