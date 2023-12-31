class Solution {
public:

    bool isRobotBounded(string instructions) {
        
        int x = 0;
        int y = 0;
        
        int xdir = 0;
        int ydir = 1;
        
        for(int i=0; i<instructions.length(); i++)
        {
            if(instructions[i] == 'G')
            {
                x += xdir;
                y += ydir;
            }
            else if(instructions[i] == 'L')
            {
                int temp = xdir;
                xdir = -1 * ydir;
                ydir = temp;
            }
            else
            {
                int temp = ydir;
                ydir = -1 * xdir;
                xdir = temp;
            }
        }
        
        return ((x==0 && y==0) || (xdir!=0 || ydir != 1));
        
                
    }
};