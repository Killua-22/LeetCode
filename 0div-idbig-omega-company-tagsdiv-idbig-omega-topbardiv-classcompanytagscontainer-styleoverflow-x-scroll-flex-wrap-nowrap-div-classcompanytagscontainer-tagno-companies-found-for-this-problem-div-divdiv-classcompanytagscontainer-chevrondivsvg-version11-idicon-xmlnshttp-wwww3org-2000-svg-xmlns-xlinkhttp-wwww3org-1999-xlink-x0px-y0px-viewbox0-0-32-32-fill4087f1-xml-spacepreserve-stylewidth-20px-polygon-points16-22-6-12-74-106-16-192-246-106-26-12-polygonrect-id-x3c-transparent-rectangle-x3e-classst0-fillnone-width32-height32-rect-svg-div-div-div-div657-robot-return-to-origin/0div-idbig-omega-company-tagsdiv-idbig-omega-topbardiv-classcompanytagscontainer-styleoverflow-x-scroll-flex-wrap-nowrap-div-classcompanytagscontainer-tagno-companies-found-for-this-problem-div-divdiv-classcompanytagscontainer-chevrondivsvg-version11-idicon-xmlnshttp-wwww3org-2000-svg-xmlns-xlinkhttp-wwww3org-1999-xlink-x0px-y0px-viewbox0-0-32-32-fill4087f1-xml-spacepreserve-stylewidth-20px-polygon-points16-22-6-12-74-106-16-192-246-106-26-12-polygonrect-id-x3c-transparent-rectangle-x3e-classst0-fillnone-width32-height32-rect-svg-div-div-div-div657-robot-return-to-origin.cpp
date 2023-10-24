class Solution {
public:
    bool judgeCircle(string moves) {
        
        int ucount = 0;
        int dcount = 0;
        int rcount = 0;
        int lcount = 0;
        for(int i=0; i<moves.size(); i++)
        {
            if(moves[i] == 'U')
                ucount++;
            if(moves[i] == 'D')
                dcount++;
            if(moves[i] == 'R')
                rcount++;
            if(moves[i] == 'L')
                lcount++;
        }
        
        return (ucount == dcount) && (rcount == lcount);
    }
};