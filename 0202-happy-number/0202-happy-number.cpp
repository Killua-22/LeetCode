class Solution {
public:
    
    int square(int n) {
        
        long long sq = 0;
        while(n) {
            int temp = n % 10;
            sq += temp * temp;
            n /= 10;
        }
        
        return sq;
    }
    
    bool isHappy(int n) {
        
        if(n==1)
            return true;
        
        unordered_set<int> us;
        
        while(n != 1)
        {
            int temp = square(n);
            
            if(us.find(temp) != us.end())
                return false;
            us.insert(temp);
            n = temp;
        }
        
        return true;
        
    }
};