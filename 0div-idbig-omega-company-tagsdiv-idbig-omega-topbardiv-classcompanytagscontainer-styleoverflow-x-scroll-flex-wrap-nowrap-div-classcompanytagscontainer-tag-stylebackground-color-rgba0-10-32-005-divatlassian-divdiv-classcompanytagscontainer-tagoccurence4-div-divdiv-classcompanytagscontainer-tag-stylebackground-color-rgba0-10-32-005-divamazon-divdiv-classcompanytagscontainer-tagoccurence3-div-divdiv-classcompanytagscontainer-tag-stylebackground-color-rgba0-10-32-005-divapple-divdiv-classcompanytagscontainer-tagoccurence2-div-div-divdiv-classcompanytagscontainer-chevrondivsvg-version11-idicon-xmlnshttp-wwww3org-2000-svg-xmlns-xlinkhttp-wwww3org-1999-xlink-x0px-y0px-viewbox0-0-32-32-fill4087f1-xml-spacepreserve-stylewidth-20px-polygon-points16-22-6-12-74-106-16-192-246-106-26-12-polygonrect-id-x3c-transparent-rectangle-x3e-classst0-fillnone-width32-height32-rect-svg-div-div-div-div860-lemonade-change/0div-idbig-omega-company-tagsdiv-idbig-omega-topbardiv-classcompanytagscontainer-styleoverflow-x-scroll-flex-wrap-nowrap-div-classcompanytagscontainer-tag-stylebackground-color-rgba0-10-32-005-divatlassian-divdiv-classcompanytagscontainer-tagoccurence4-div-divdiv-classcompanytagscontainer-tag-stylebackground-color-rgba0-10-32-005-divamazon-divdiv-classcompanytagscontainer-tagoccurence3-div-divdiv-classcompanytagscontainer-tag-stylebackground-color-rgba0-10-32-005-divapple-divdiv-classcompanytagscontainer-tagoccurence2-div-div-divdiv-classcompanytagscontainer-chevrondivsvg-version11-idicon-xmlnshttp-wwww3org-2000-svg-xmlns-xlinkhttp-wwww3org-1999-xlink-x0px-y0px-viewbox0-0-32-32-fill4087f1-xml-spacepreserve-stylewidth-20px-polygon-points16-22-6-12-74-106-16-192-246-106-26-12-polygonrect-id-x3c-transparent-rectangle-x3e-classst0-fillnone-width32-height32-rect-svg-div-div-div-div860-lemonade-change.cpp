class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives = 0;
        int tens = 0;
        int twenties = 0;
        
        for(int i=0; i<bills.size(); i++)
        {
            if(bills[i] == 5)
            {
                fives++;
            }
            else if(bills[i] == 10)
            {
                if(fives < 0)
                    return false;
                tens++;
                fives--;
            }
            else if(bills[i] == 20)
            {
                if(tens > 0)
                {
                    tens--;
                    
                    if(fives > 0)
                        fives--;
                    else 
                        return false;
                }
                else
                {
                    if(fives < 3)
                        return false;
                    fives -= 3;
                        
                }
            }
        }
        
        return true;
        
        
        
    }
};