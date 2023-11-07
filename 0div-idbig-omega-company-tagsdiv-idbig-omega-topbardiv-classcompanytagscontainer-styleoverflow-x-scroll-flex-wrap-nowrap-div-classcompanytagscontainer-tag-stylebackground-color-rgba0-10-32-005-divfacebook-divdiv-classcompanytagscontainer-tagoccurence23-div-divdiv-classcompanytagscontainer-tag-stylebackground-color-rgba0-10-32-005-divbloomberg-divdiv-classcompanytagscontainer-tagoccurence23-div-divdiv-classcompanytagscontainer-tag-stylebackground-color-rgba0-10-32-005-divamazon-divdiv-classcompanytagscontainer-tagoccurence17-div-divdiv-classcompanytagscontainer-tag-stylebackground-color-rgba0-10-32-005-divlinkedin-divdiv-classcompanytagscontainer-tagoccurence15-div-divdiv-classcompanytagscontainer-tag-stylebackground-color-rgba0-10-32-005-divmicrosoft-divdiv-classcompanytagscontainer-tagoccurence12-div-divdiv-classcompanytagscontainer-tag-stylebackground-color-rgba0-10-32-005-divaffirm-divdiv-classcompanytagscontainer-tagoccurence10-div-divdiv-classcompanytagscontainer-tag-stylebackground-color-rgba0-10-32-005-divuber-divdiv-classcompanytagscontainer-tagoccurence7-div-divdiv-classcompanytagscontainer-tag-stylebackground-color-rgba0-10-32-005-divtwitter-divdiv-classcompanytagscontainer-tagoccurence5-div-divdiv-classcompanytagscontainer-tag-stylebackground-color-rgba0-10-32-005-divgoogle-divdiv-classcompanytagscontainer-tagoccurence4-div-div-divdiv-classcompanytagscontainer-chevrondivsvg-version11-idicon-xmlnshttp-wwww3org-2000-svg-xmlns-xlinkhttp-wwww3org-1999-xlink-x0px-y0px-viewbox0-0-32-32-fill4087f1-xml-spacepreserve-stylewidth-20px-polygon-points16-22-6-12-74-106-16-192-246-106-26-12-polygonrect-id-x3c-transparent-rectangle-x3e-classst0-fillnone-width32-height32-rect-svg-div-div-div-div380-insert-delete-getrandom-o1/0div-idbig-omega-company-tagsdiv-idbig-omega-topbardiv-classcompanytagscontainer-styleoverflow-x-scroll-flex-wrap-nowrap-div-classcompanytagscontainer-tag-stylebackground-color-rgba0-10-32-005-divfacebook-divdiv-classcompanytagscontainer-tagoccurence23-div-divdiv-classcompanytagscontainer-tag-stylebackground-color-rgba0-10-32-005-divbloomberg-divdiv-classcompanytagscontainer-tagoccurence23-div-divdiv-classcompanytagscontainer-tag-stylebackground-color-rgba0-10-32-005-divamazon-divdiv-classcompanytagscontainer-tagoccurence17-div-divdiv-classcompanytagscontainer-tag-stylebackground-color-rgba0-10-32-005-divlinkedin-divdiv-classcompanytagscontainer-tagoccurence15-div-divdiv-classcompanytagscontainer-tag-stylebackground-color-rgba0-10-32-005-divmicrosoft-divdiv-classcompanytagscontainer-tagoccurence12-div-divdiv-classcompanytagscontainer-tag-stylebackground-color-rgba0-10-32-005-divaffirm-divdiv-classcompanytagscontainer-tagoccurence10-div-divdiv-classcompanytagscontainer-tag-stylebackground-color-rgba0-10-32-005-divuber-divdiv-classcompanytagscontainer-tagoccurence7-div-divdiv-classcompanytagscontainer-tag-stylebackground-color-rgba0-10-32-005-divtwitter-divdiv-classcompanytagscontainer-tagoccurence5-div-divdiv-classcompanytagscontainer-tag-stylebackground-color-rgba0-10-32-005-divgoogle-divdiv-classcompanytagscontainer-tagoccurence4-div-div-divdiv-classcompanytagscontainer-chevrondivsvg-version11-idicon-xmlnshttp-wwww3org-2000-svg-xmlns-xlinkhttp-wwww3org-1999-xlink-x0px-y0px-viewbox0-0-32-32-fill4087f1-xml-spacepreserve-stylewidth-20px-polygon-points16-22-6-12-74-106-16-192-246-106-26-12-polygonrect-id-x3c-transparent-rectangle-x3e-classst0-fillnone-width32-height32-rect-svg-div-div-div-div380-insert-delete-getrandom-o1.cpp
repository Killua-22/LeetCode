class RandomizedSet {
public:
    unordered_set<int> rst;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(rst.find(val) != rst.end())
            return false;
        else{
            rst.insert(val);
            return true;
        }
    }
    
    bool remove(int val) {
        if(rst.find(val) == rst.end())
            return false;
        else
        {
            rst.erase(rst.find(val));
            return true;
        }
    }
    
    int getRandom() {
        int ub = rst.size()-1;
        int lb = 0;
        int random = (rand() % (ub - lb + 1)) + lb;
        int i=0;
        for(auto x : rst)
        {
            if(i==random)
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