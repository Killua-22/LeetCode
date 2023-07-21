public class RandomizedSet {
    
    HashSet<int> hash;

    public RandomizedSet() {
        hash = new HashSet<int>();
    }
    
    public bool Insert(int val) {
        if(hash.Contains(val))
            return false;
        hash.Add(val);
        return true;
    }
    
    public bool Remove(int val) {
        if(!hash.Contains(val))
            return false;
        hash.Remove(val);
        return true;
    }
    
    public int GetRandom() {
        int random = new Random().Next(hash.Count);
        int i = 0;
        foreach(int x in hash)
        {
            if(i == random)
                return x;   
            i++;
        }
        
        return 0;
    }
}

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * bool param_1 = obj.Insert(val);
 * bool param_2 = obj.Remove(val);
 * int param_3 = obj.GetRandom();
 */