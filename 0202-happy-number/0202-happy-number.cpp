class Solution {
public:
    
    int square(int n) {
        int sum = 0;
        while(n > 0) {
            int temp = n % 10;
            sum += temp * temp;
            n = n/10;
        }
        
        return sum;
    }

    bool isHappy(int n) {
        if(n==1)
            return true;
        
        unordered_set<int> m;
        
        while(n != 1) {
            
            int temp = square(n);
            
            if(m.find(temp) != m.end()) 
                return false;
            
            m.insert(temp);
            n = temp;
            
        }
        
        return true;
        
            
            
    }
};